package select_sort

import (
	"fmt"
	"testing"
)

func Test_SelectSort(t *testing.T) {
	a := []int{1, 3, 2, 6, 2, 4}
	SelectSort(a)
	fmt.Println(a)
}
