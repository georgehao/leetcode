/*
 * Using the Go language, have the function SimpleAdding(num) add up all the numbers from 1 to num.
 * For the test cases, the parameter num will be any number from 1 to 1000.
 * Sample Test Cases
 * Input:12
 * Output:78
 *Input:140
 * Output:9870
 */
func SimpleAdding(num int) int {
	return num*1 + num*(num-1)/2
}
