package reverse_string

/*
 * Have the function FirstReverse(str) take the str parameter being passed and return the string in reversed order.
 * Use the Parameter Testing feature in the box below to test your code with different arguments.
 */
import "fmt"

func FirstReverse(str string) string {
	xrunes := []uint8(str)
	str_len := len(str)
	for i := 0; i < str_len/2; i++ {
		xrunes[i], xrunes[str_len-i-1] = xrunes[str_len-i-1], xrunes[i]
	}
	return string(xrunes)
}
