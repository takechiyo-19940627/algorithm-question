package algorithm

import (
	"fmt"
	"math"
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
		fmt.Printf("%05b\n", bit)
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

func calcDist(x1, y1, x2, y2 int) float64 {
	x := math.Pow(float64(x1 - x2), 2)
	y := math.Pow(float64(y1 - y2), 2)
	return math.Sqrt(x + y)
}

