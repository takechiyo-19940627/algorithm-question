package algorithm

import (
	"fmt"
	"math"
	"strconv"
)

func SearchDist(x, y *[]int, len int, minDist *float64) {
	for i := 0; i < len; i++ {
		for j := i + 1; j < len; j++ {
			xv := *x
			yv := *y
			dist := calcDist(xv[i], yv[i], xv[j], yv[j])
			if dist < *minDist {
				*minDist = dist
			}
		}
	}
}

func SearchIndex(fId *int, n, target int, arr *[]int) {
	for i := 0; i < n; i++ {
		ar := *arr
		if (ar[i] == target) {
			*fId = i
			break
		}
	}
}

func SearchMin(min *int, arr *[]int) {
	l := len(*arr)
	ar := *arr
	for i := 0; i < l; i++ {
		if ar[i] < *min {
			*min = ar[i]
		}
	}
}

func SearchMinSum(min *int, k int, a, b *[]int) {
	for i := 0; i < len(*a); i++ {
		n := *a
		for j := 0; j < len(*b); j++ {
			m := *b
			if n[i] + m[j] < k {
				continue
			}

			if n[i] + m[j] < *min {
				*min = n[i] + m[j]
			}
		}
	}
}

// ビットで探索する
func SearchPartSum(n, w int, arr *[]int) {
	a := *arr
	isExist := false

	// ビットを使って部分和の組み合わせ(部分集合)を表現する。
	for bit := 0; bit < (1 << n); bit++ {
		sum := 0

		// 1) 1を0〜iでシフト演算する
		// 2) 上記結果と部分集合をbit表現したものとでAND演算を実施する。
		// 3) 0以外の値であれば配列i番目の値が組み合わせに存在することになるので結果に加算する
		for i := 0; i < n; i++ {
			b := bit & (1 << i)
			if b != 0 {
				sum += a[i]
			}
		}

		if sum == w {
			isExist = true
		}
	}

	if isExist {
		fmt.Println("YES")
	} else {
		fmt.Println("NO")
	}
}

func CountVal(n int, arr *[]int) {
	a := *arr
	c := 0
	for i := 0; i < len(a); i++ {
		if a[i] == n {
			c++
		}
	}

	fmt.Printf("count: %d\n", c)
}

func SearchSecondMin(arr *[]int) {
	a := *arr
	n := len(a)
	mostMin := 20000000
	secondMin := 2000000

	for i := 0; i < n; i++ {
		if a[i] < mostMin {
			secondMin = mostMin
			mostMin = a[i]
		} else if a[i] < secondMin {
			secondMin = a[i]
		}
	}

	fmt.Printf("scondMin: %d\n", secondMin)
}

func SearchMaxDiff(arr *[]int) {
	a := *arr
	n := len(a)
	min := 2000000
	max := -1

	for i := 0; i < n; i++ {
		if a[i] < min {
			min = a[i]
		}
		if a[i] > max {
			max = a[i]
		}
	}

	fmt.Printf("maxDiff: %d \n", max - min)
}

func CountEvent(arr *[]int) {
	a := *arr
	n := len(a)
	c := 2000000
	for i := 0; i < n; i++ {
		t := countDevideTimes(a[i])
		c = int(math.Min(float64(c), float64(t)))
	}

	fmt.Printf("count: %d \n", c)
}

func CountPartSum(k, n int) {
	// NOTE: 方針
	// x+y+z=n => z=n-x-y と考えるとx,yが決まるとzが決まる。
	// nについては与えられる整数なので、決まっている。x,yを変数にして探索する。
	// x,yがわかったとしても、z<=kを満たすかどうかの確認をする必要がある。

	// NOTE: k, n を比較して小さい方をx,yの範囲にする
	// k > n のケースで、x,y=k となった場合、x+y+z>nとなってしまう。なので、n以下を使う。
	// k < n のケースでは、x,y,<=k の範囲がnより小さいから上記のようなことを気にしないで良いので、0<=x,y<=kで良い。
	// x,yは0以上なので0からスタートする
	c := 0
	len := int(math.Min(float64(k), float64(n)))
	for x := 0; x <= len; x++ {
		for y := 0; y <= len; y++ {
			z := n - x - y
			if z >= 0 && z <= k {
				fmt.Printf("x: %d, y: %d, z: %d\n",x , y, z)
				c++
			}
		}
	}

	fmt.Printf("count: %d \n", c)
}

func CalcStr(s string) {
	// 長さNの文字列数字S
	// Sを先頭から+で区切って数式を作る
	// すべての数式の計算結果を足す
	// 2^nのアルゴリズム
	// n = 2の時、12,1+2
	// n = 3の時 123, 1+23, 12+3, 1+2+3
	// n = 4の時 1234, 1+234, 12+34, 123+4, 1+2+3+4
	// n-1箇所について「+」を入れることが可能。
	// すべての選択肢は 2^(n-1)通りになる。
	n := len(s)
	r := 0
	for bit := 0; bit < (1 << (n - 1)); bit++ {
		// 「+」と「+」との間の値を表す。
		tmp := 0
		// 末尾のデータについては最後に加算すれば良いのでn-2までチェックすれば良い。
		for i := 0; i < n - 1; i++ {
			// 文字列の先頭から参照されているから、2回目のループ以降でtmpの桁を増やす
			tmp *= 10
			x, _ := strconv.Atoi(string(s[i]))
			tmp += x

			// n-1箇所のうちi個目に「+」があるかどうかをビット演算でチェックする。
			b := bit & (1 << i)
			// fmt.Printf("bit: %06b\n", bit)
			// fmt.Printf("b  : %06b\n", 1 << i)
			// 「+」が存在するので、rに加算してからtmpをリセットする。
			if b != 0 {
				r += tmp
				tmp = 0
			}
		}

		// 最後の「+」から残りの部分(最後尾の数字)を答えに加算する
		tmp *= 10
		y, _ := strconv.Atoi(back(s))
		tmp += y
		r += tmp
		fmt.Printf("r: %d\n", r)
	}

	fmt.Printf("sum: %d\n", r)
}

func countDevideTimes(a int) int {
	c := 0
	for {
		if a % 2 == 0 {
			c++
			a /= 2
		} else {
			break
		}
	}

	return c
}

func calcDist(x1, y1, x2, y2 int) float64 {
	x := math.Pow(float64(x1 - x2), 2)
	y := math.Pow(float64(y1 - y2), 2)
	return math.Sqrt(x + y)
}

func back(s string) string {
	len := len(s)
	return string(s[len-1])
}

