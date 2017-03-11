package insert_sort

import (
	"fmt"
	"testing"
)

func Test_InsertSort(t *testing.T) {
	a := []int{1, 3, 2, 4, 6}
	InsertSort(a)
	fmt.Println(a)

	a = []int{6, 5, 4, 3, 2, 1, 2, 3}
	InsertSort(a)
	fmt.Println(a)
}
