package algorithm

import (
	"algorithm_practice/util"
	"fmt"
	"math"
)

func FlogMoveMinCost(n int, arr *[]int) {
	// i番目へ到達する上での最小コストを記録する配列
	// i=0 の場合 0
	// i>=2 の場合、i-2 → i, i-2 → i のコストのうち最小のものが入ってくる
	dp := make([]int, n)
	// i番目にアクセスした時に値が0であると正しく動かないので大きい
	dp = util.Fill(dp, 9999999999)
	dp[0] = 0
	h := *arr

	for i := 1; i < n; i++ {
		if i == 1 {
			// 0番目と1番目のコストを計算する
			a := math.Abs(float64(h[i] - h[i - 1]))
			dp[i] = int(a)
		} else {
			// i-1へ移動するまでにかかっているコスト
			dp1 := float64(dp[i - 1])
			// i-2へ移動するまでにかかっているコスト
			dp2 := float64(dp[i - 2])
			// i-1からiへ移動した時のコスト
			c1 := math.Abs(float64(h[i] - h[i - 1]))
			// i-2からiへ移動した時のコスト
			c2 := math.Abs(float64(h[i] - h[i - 2]))
			dp[i] = int(math.Min(dp1 + c1, dp2 + c2))
		}
	}

	fmt.Printf("min cost: %d \n", dp[n - 1])
}

func FlogMinConst2(n int, arr *[]int) {
	dp := make([]int, n)
	dp = util.Fill(dp, 9999999999)
	dp[0] = 0
	h := *arr

	for i := 1; i < n; i++ {
		c1 := dp[i - 1] + int(math.Abs(float64(h[i] - h[i - 1])))
		chmin(&dp[i], c1)

		if i > 1 {
			c2 := dp[i - 2] + int(math.Abs(float64(h[i] - h[i - 2])))
			// i-2から移動するほうがコストが小さければ更新される
			chmin(&dp[i], c2)
		}
	}

	fmt.Printf("min cost: %d \n", dp[n - 1])
}

// i番目からi+1, i+2へ配る方式で解いてみる
func FlogMoveMinCost3(n int, arr *[]int) {
	dp := make([]int, n)
	dp = util.Fill(dp, 9999999999)
	dp[0] = 0
	h := *arr

	for i := 0; i < n; i++ {
		if i + 1 < n {
			c1 := dp[i] + int(math.Abs(float64(h[i] - h[i + 1])))
			chmin(&dp[i + 1], c1)
		}
		if i + 2 < n {
			c2 := dp[i] + int(math.Abs(float64(h[i] - h[i + 2])))
			chmin(&dp[i + 2], c2)
		}
	}

	fmt.Printf("min cost: %d \n", dp[n - 1])
}

func Napsac(n, mw int, warr, vaarr *[]int) {
	weight := *warr
	value := *vaarr
	dp := make([][]int, n + 1)
	for i := 0; i < n + 1; i++ {
		dp[i] = make([]int, mw + 1)
		for j := 0; j < mw + 1; j++ {
			dp[i][j] = 0
		}
	}

	for i := 0; i < n; i++ {
		for w := 0; w <= mw; w++ {
			if w - weight[i] >= 0 {
				// i番目の値が決まっている状態で[i+1][w]を更新する。
				// i番目を選んだ後に、(i+1,w) となるならば、選ぶ前状態は(i+1, w-weight[i-1])となる。
				// さらに、その状態にi番目のvalueが加わる。
				chmax(&dp[i + 1][w], dp[i][w - weight[i]] + value[i])
			}

			chmax(&dp[i + 1][w], dp[i][w])
		}
	}

	fmt.Printf("value: %d\n", dp[n][mw])
}

func GetEditCharLength(s, t string) {
	dp := make([][]int, len(s) + 1)
	for i := 0; i < len(s) + 1; i++ {
		dp[i] = make([]int, len(t) + 1)
		for j := 0; j < len(t) + 1; j++ {
			dp[i][j] = 9999999999
		}
	}
	dp[0][0] = 0

	for i := 0; i <= len(s); i++ {
		for j := 0; j <= len(t); j++ {
			// 変更操作
			// i, j どちらも0より大きいので実際の文字列比較
			if i > 0 && j > 0 {
				// index調整の都合上 -1 している。
				if (s[i - 1] == t[j - 1]) {
					// 同じ文字列の時は変更しないのでコストが変わらない
					chmin(&dp[i][j], dp[i - 1][j - 1])
				} else {
					// 文字が違う場合は変更が発生するので、コスト1足す。
					chmin(&dp[i][j], dp[i - 1][j - 1] + 1)
				}
			}

			// 削除操作
			// j=0のケース
			if i > 0 {
				// sが空文字なので、一致させるためにsの文字列を削除する。なのでt側のコストを+1する。
				chmin(&dp[i][j], dp[i - 1][j] + 1)
			}

			// 挿入操作
			// i=0のケース
			if j > 0 {
				// tが空文字なので、s側に挿入操作を行う。なのでs側のコストを+1する。
				// ただ、これはt側の文字削除操作と同じ扱いになる。
				chmin(&dp[i][j], dp[i][j - 1] + 1)
			}
		}
	}

	fmt.Printf("cost: %d \n", dp[len(s)][len(t)])
}

func Section(n int, v *[]int) {
	v1 := *v
	c := make([][]int, n + 1)
	for i := 0; i < n + 1; i++ {
		c[i] = make([]int, n + 1)
		for j := 0; j < n + 1; j++ {
			c[i][j] = v1[i]
		}
	}

	const ini = 999999999
	dp := make([]int, n + 1)
	for i := 0; i <  n + 1; i++ {
		dp[i] = ini
	}
	dp[0] = 0

	for i := 0; i <= n; i++ {
		for j := 0; j < i; j++ {
			chmin(&dp[i], dp[j] + c[j][i])
		}
	}

	fmt.Printf("min cost: %d\n", dp[n])
}

func chmax(a *int, b int) {
	if *a < b {
		*a = b
	}
}

func chmin(a *int, b int) {
	if *a > b {
		*a = b
	}
}
