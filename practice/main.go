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

	// countPartSum()

	// calcStr()

	// _ = algorithm.Sum(5)

	// r := algorithm.GetGreatestCommonDivisor(51,15)
	// fmt.Println(r)

	// f := algorithm.GetFibo(6)
	// fmt.Println(f)

	// m := make([]int, 50)
	// m = util.Fill(m, -1)
	// mf := algorithm.GetFiboMemo(49, &m)
	// fmt.Println(mf)
	// for i := 0; i < len(m); i++ {
	// 	fmt.Println(m[i])
	// }

	// sumPartMemo()


	// r := algorithm.GetToribo(6)
	// fmt.Println(r)

	// m := make([]int, 50)
	// m = util.Fill(m, -1)
	// r := algorithm.GetTriboMemo(10, &m)
	// fmt.Println(r)

	// n := 1000
	// cur := 0
	// use := 0
	// c := 0
	// algorithm.GetPartSumCount(n, cur, use, &c)
	// fmt.Println(c)

	// h := []int{2, 9, 4, 5, 1, 6, 10}
	// n := len(h)
	// algorithm.FlogMoveMinCost(n, &h)

	// algorithm.FlogMinConst2(n, &h)

	// algorithm.FlogMoveMinCost3(n, &h)
	// w := []int{2, 1, 3, 2, 1, 5}
	// v := []int{3, 2, 6, 1, 3, 85}
	// n := len(w)
	// algorithm.Napsac(n, 15, &w, &v)

	// s := "logistic"
	// t := "algorithm"
	// algorithm.GetEditCharLength(s, t)

	// a := []int {1, 3, 4, 5}
	// b := []int {10, 30, 40, 50}
	// c := []int {100, 300, 400, 500}
	// n := len(a)
	// algorithm.GetMaxSummerVacationValue(n, &a, &b, &c)
	a := []int{1, 3, 4, 5}
	w := 13
	n := len(a)
	// r := algorithm.MaxSumAsW(n, w, a)
	r := algorithm.MaxSumLessThanW(n, w, a)
	fmt.Printf("count: %d\n", r)
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

func calcStr() {
	algorithm.CalcStr("123")
}

func sumPartMemo() {
	ar := [] int {3, 2, 6, 5}
	m := make([]map[int]bool, len(ar) + 1)
	for i := 0; i < len(m); i++ {
		m[i] = make(map[int]bool)
	}
	r2 := algorithm.ExistPartSum(len(ar), 14, &ar, &m)
	fmt.Println(r2)
}
