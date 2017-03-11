package select_sort

func SelectSort(a []int) {
	length := len(a)
	for i := 0; i < length; i++ {
		//select the minimum
		min_index := i
		for j := i; j < length; j++ {
			if a[min_index] > a[j] {
				min_index = j
			}
		}

		if i != min_index {
			a[i], a[min_index] = a[min_index], a[i]
		}
	}
}
