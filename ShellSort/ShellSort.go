package shell_sort

func InsertSort(a []int, k int) {
	length := len(a)
	for i := k; i < length; i++ {
		if a[i] < a[i-k] {
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

func ShellSort(a []int) {
	k := len(a) / 2
	for k >= 1 {
		InsertSort(a, k)
		k = k / 2
	}
}
