package fast_sort

import (
	"fmt"
	"testing"
)

func Test_FastSort(t *testing.T) {
	a := []int{5, 2, 3, 1, 6, 4}
	FastSort(a, 0, len(a)-1)
	fmt.Println(a)
}
