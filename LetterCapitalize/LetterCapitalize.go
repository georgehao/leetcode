/**
 * Have the function LetterCapitalize(str) take the str parameter being passed and capitalize the first letter of each word. Words will be separated by only one space.
 * Use the Parameter Testing feature in the box below to test your code with different arguments.
 */
func LetterCapitalize(str string) string {
	r := []rune(str)
	if r[0] >= 'a' && r[0] <= 'z' {
		r[0] = r[0] - 32
	}

	for i, v := range str {
		if v == ' ' && (r[i+1] >= 'a' && r[i+1] <= 'z') {
			r[i+1] = r[i+1] - 32
		}
	}
	return string(r)
}
