package island_perimeter

/**
You are given a map in form of a two-dimensional integer grid where 1 represents land and 0 represents water.
Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water,
and there is exactly one island (i.e., one or more connected land cells). The island doesn't have "lakes"
(water inside that isn't connected to the water around the island). One cell is a square with side length 1.
The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.

https://leetcode.com/problems/island-perimeter/

My Thinking:
当我们从第一个格子遍历时, 我们只查看这个格子的右边和下边是否有重合就可以了,
左边和上边不用考虑.因为一个格子如果和另外一个格子重合, 另外一个格子的左边和
上边肯定是这个格子右边和下边.相当于我们已经考虑格子的左边和上边.


--------------->x
 |   [0, 1, 0, 0]
 |   [1, 1, 1, 0]
 |   [0, 1, 0, 0]
 |   [1, 1, 0, 0]
\/

(1,0) 下边-->+1
(1,0) 右边-->+1
(1,1) 右边,下边->+2
(1,2) 无
(2,1) 下边-->+1
(3,0) 右边-->+1

total-->6

7*4-6*2 = 16

*/

func islandPerimeter(grid [][]int) int {
	var common_border_num int = 0
	var island_nums int = 0
	var x int = len(grid)
	var y int = len(grid[0])

	for i, arr := range grid {
		for j, v := range arr {
			if v == 1 {
				island_nums++
				if j+1 <= y-1 && arr[j+1] == 1 {
					common_border_num++
				}

				if i+1 <= x-1 && grid[i+1][j] == 1 {
					common_border_num++
				}
			}
		}
	}

	return island_nums*4 - common_border_num*2
}
