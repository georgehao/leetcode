package fast_sort

/**
快排用的分治思想
下面用a=[4, 6, 5, 3, 2, 8, 1, 7]做例子
1. 首先以a[0]做基准
2. 把大于a[0]归为一类, 小于0的归为一类
3. 然后分别对这两类在进行分类
*/

func Partition(a []int, low int, high int) int {
	watcher := a[0]
	for low < high {
		for low < high && a[high] >= watcher {
			high--
		}
		a[low], a[high] = a[high], a[low]

		for low < high && a[low] <= watcher {
			low++
		}
		a[low], a[high] = a[high], a[low]
	}
	return low
}

func FastSort(a []int, low int, high int) {
	if low < high {
		watcher := Partition(a, low, high)
		FastSort(a, low, watcher-1)
		FastSort(a, watcher+1, high)
	}
}
