package shell_sort

import (
	"fmt"
	"testing"
)

func Test_InsertSort(t *testing.T) {
	fmt.Println(">>>>>>InsertSort")
	a := []int{1, 4, 2, 6, 3, 2, 5}
	InsertSort(a, 1)
	fmt.Println(a)

	fmt.Println(">>>>>>ShellSort")
	a = []int{1, 4, 2, 6, 3, 2, 5, 10, 9, 8, 1, 4, 11, 5}
	ShellSort(a)
	fmt.Println(a)
}
