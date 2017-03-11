package insert_sort

func InsertSort(a []int) {
	var length = len(a)
	for i := 1; i < length; i++ {
		if a[i] < a[i-1] {
			x := i
			for j := i - 1; j >= 0; j-- {
				if a[x] < a[j] {
					a[x], a[j] = a[j], a[x]
					x = j
				}
			}
		}
	}
}
