package algorithm

func InsectionSort(nums *[]int) {
	a := *nums
	len := len(a)
	// NOTE: 1からスタートする
	for i := 1; i < len; i++ {
		v := a[i]
		// v を挿入する適切な場所 j を探す
		j := i
		for ; j > 0; j-- {
			if (a[j-1] > v) { // v より大きいものは1つ後ろに移す
				a[j] = a[j-1]
			} else {
				break // v 以下になったら止める
			}
		}
		a[j] = v
	}
}

func MergeSort(a *[]int, left, right int) {
	// fmt.Printf("【StartFunc】 left: %v \nright: %v \n\n", left, right)
	if right - left == 1 {
		// fmt.Printf("【FinishFunc】 left: %v \nright: %v \n\n", left, right)
		return
	}
	mid := left + (right - left) / 2

	// 左半分のソート
	MergeSort(a, left, mid)

	// 右半分のソート
	MergeSort(a, mid, right)

	var buf []int
	n := *a
	for i := left; i < mid; i++ {
		buf = append(buf, n[i])
	}
	for i := right - 1; i >= mid; i-- {
		buf = append(buf, n[i])
	}

	// 結果をマージする
	index_left := 0
	index_right := len(buf) - 1
	// fmt.Printf("left: %v \nright: %v \nbuff: %v\n\n", left, right, buf)
	for i := left; i < right; i++ {
		// fmt.Printf("buf index_left: %v\n", buf[index_left])
		// fmt.Printf("buf index_right: %v\n", buf[index_right])
		if (buf[index_left] <= buf[index_right]) {
			n[i] = buf[index_left]
			index_left++
		} else {
			n[i] = buf[index_right]
			index_right--
		}	
	}
	// fmt.Printf("left: %v \nright: %v \narr: %v\n\n", left, right, *a)
}
