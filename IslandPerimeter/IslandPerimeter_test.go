package island_perimeter

import (
	"fmt"
	"testing"
)

func Test_islandPerimeter(t *testing.T) {
	fmt.Println(islandPerimeter([][]int{{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}})) //16
	fmt.Println(islandPerimeter([][]int{{1, 1, 1, 0}}))                                           // 8
	fmt.Println(islandPerimeter([][]int{{1}, {0}}))                                               //4                                      // 4
	fmt.Println(islandPerimeter([][]int{{1, 0}, {1, 0}}))                                         //6
	fmt.Println(islandPerimeter([][]int{{1, 0, 0}, {1, 1, 0}}))                                   //8
}
