package heap_sort

import (
	"fmt"
	"testing"
)

func Test_HeapSort(t *testing.T) {
	a := []int{6, 2, 3, 5, 1}
	HeapSort(a)
	fmt.Println(a)
}
