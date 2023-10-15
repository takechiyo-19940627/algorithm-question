package main

import (
	"algorithm_practice/algorithm"
	"fmt"
)

func main()  {
	arr := [] int{3, 1, 2, 7, 10, 4, 5}
	algorithm.InsectionSort(&arr)

	// fmt.Println(arr)
	// mergeSort()

	// searchDist()

	// searchIndex()

	// searchMin()

	// searchMinSum()

	// searchPartSum()

	// countVal()

	// searchSecondMin()

	// countEven()

	// searchMaxDiff()

	countPartSum()
}

func mergeSort() {
	arr2 := [] int{3, 2, 1, 7, 10, 4, 5}
	len := len(arr2)
	algorithm.MergeSort(&arr2, 0, len)

	fmt.Println(arr2)
}

func searchDist() {
	md := 100000000.0
	n := 5
	x := [] int{1, 2, 3, 4, 5}
	y := [] int{1, 3, 10, 1, 3}
	
	fmt.Println(md)
	algorithm.SearchDist(&x, &y, n, &md)
	fmt.Println(md)
}

func searchIndex() {
	fId := -1
	target := 10
	arr := [] int{3, 6, 0, 3, 5, 2}
	algorithm.SearchIndex(&fId, len(arr), target, &arr)

	fmt.Println(fId)
}

func searchMin() {
	min := 20000000
	arr := [] int{100, 300, 1, 500, 600}
	algorithm.SearchMin(&min, &arr)
	fmt.Println(min)
}

func searchMinSum() {
	k := 100
	a := [] int{10, 300, 500, 900, 1000}
	b := [] int{300, 800, 400, 10, 50}
	min := 20000000
	algorithm.SearchMinSum(&min, k, &a, &b)
	
	fmt.Println(min)
}

func searchPartSum() {
	n := 5
	w := 10
	arr := [] int{1, 2, 12, 4, 11}
	algorithm.SearchPartSum(n, w, &arr)
}

func countVal() {
	arr := [] int{1,2,4,3,4,5,4}
	n := 4
	algorithm.CountVal(n, &arr)
}

func searchSecondMin() {
	arr := [] int{200, 100, 12, 4, 11}
	algorithm.SearchSecondMin(&arr)
}

func searchMaxDiff() {
	arr := [] int{200, 300, 1000, 500}
	algorithm.SearchMaxDiff(&arr)
}

func countEven() {
	arr := [] int{160, 120, 600, 8, 40}
	algorithm.CountEvent(&arr)
}

func countPartSum() {
	k := 6
	n := 12
	algorithm.CountPartSum(k, n)
}
