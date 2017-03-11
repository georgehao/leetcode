/**
 * Have the function SimpleSymbols(str) take the str parameter being passed and determine if it is an acceptable
 * sequence by either returning the string true or false. The str parameter will be composed of + and = symbols
 * with several letters between them (ie. ++d+===+c++==a) and for the string to be true each letter must be surrounded by a + symbol.
 * Use the Parameter Testing feature in the box below to test your code with different arguments.
 */
func SimpleSymbols(str string) bool {
	r := []rune(str)
	var flag bool = false
	for i, v := range r {
		if (v >= 'a' && v <= 'z') || (v >= 'A' && v <= 'Z') {
			if i-1 < 0 || i+1 >= len(r) {
				flag = false
				continue
			}

			if (r[i-1] == '+') && (r[i+1] == '+') {
				flag = true
			} else {
				flag = false
			}
		}
	}
	return flag
}
