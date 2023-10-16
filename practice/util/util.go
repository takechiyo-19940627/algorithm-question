package util

func Fill(arr []int, val int) []int {
	for i := 0; i < len(arr); i++ {
		arr[i] = val
	}

	return arr
}
