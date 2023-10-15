package input

import (
	"bufio"
	"fmt"
	"os"
	"strconv"
	"strings"
)

func InputChars(inputs *[]string) {
	sc := bufio.NewScanner(os.Stdin)
	sc.Scan()
	input := strings.Split(sc.Text(), " ")
	*inputs = append(*inputs, input...)
}

func InputCoordinates(n *int, x, y *[]int) {
	fmt.Scanf("%d", n)

	sc := bufio.NewScanner(os.Stdin)

	for i := 0; i < *n; i++ {
		sc.Scan()
		inputs := strings.Split(sc.Text(), " ")
		x1, _ := strconv.Atoi(inputs[0])
		y1, _ := strconv.Atoi(inputs[1])
		*x = append(*x, x1)
		*y = append(*y, y1)
	}
}
