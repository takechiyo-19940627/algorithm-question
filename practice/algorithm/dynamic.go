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
			chmin(&dp[i], c2)
		}
	}

	fmt.Printf("min cost: %d \n", dp[n - 1])
}

func chmin(a *int, b int) {
	if *a > b {
		*a = b
	}
}
