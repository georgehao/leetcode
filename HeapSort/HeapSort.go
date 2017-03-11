package heap_sort

import (
	"fmt"
)

func MaxHeapify(a []int, start int, end int) {
	dad := start
	son := dad*2 + 1
	for son <= end {
		if son+1 <= end && a[son] < a[son+1] {
			son++
		}

		if a[dad] > a[son] {
			return
		} else {
			a[dad], a[son] = a[son], a[dad]
			dad = son
			son = dad*2 + 1
		}
	}
}

func HeapSort(a []int) {
	length := len(a)
	for i := length/2 - 1; i >= 0; i-- {
		MaxHeapify(a, i, length-1)
	}

	for i := length - 1; i > 0; i-- {
		a[0], a[i] = a[i], a[0]
		fmt.Println(a)
		MaxHeapify(a, 0, i-1)
	}
}
