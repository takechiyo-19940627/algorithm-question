package algorithm

func Sum(n int) int {
	// fmt.Printf("func(%d)を呼び出しました。\n", n)
	if n == 0 {
		return 0
	}

	r := n + Sum(n - 1)
	// fmt.Printf("%d までの和 %d\n", n, r)

	return r
}

func GetGreatestCommonDivisor(m, n int) int {
	if n == 0 {
		return m
	}

	return GetGreatestCommonDivisor(n, m % n)
}

func GetFibo(n int) int {
	// fmt.Printf("GetFibo(%d) を呼び出しました。\n", n)
	if n == 0 {
		return 0
	} else if n == 1 {
		return 1
	}

	r := GetFibo(n - 1) + GetFibo(n - 2)
	// fmt.Printf("%d 項目 = %d\n", n, r)

	return r
}

func GetFiboMemo(n int, m *[]int) int {
	if n == 0 {
		return 0
	} else if n == 1 {
		return 1
	}

	memo := *m
	if memo[n] != -1 {
		return memo[n]
	}

	memo[n] = GetFiboMemo(n - 1, m) + GetFiboMemo(n - 2, m)
	
	return memo[n]
}

// 部分和問題を再帰的に解く。
func ExistPartSum(i, w int, a *[]int) bool {
	if i == 0 {
		// 求めたい部分和が0の時はtrue
		if w == 0 {
			return true
		} else {
			return false
		}
	}

	if ExistPartSum(i - 1, w, a) {
		return true
	}

	arr := *a
	return ExistPartSum(i - 1, w - arr[i - 1], a)
}
