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

func GetToribo(n int) int {
	if n == 0 || n == 1 {
		return 0
	} else if n == 2 {
		return 1
	}
	
	r := GetToribo(n - 1) + GetToribo(n - 2) + GetToribo(n - 3)

	return r
}

func GetTriboMemo(n int, m *[]int) int {
	if n == 0 || n == 1 {
		return 0
	} else if n == 2 {
		return 1
	}
	
	memo := *m
	if memo[n] != -1 {
		return memo[n]
	}

	r := GetToribo(n - 1) + GetToribo(n - 2) + GetToribo(n - 3)
	memo[n] = r

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
// 
func ExistPartSum(i, w int, a *[]int, m *[]map[int]bool) bool {
	if i == 0 {
		// 求めたい部分和が0の時はtrue
		if w == 0 {
			return true
		} else {
			return false
		}
	}
	memo := *m

	// 同一の i と w の組み合わせですでに計算されているか。
	v, ok := memo[i][w]
	if ok && v {
		return v
	}

	// a[i-1] を選ばない場合
	// 上記を表現するには w から何も引かずに再帰呼び出しを行えば良い
	if ExistPartSum(i - 1, w, a, m) {
		memo[i][w] = true
		return memo[i][w]
	}

	arr := *a
	// a[i-1] を選ぶ場合
	// 上記を表現するには、w から arr[i-1] を引いた結果について再帰呼び出しを実行すれば良い
	memo[i][w] = ExistPartSum(i - 1, w - arr[i - 1], a, m)

	return memo[i][w]
}

// 十進法表記で各桁の値が7,5,3のいずれかであり，かつ7,5,3がいずれも一度以上は登場する整数を「753数」とよぶこととします．
// 正の整数Kが与えられたときに，K以下の753数が何個あるかを求めるアルゴリズムを設計してください．
// ただしKの桁数をdとしてO(3d)程度の計算量を許容できるものとします．

func GetPartSumCount(n, cur, use int, counter *int) {
	if cur > n {
		return
	}

	if use == 0b111 {
		*counter++
	}

	GetPartSumCount(n, cur * 10 + 7, use | 0b001, counter)

	GetPartSumCount(n, cur * 10 + 5, use | 0b010, counter)

	GetPartSumCount(n, cur * 10 + 3, use | 0b100, counter)
}
