package alphabet_soup

/**
Challenge
Using the Go language, have the function AlphabetSoup(str) take the str string parameter being passed and return the string with the letters in alphabetical order (ie. hello becomes ehllo). Assume numbers and punctuation symbols will not be included in the string.
Sample Test Cases
Input:"coderbyte"
Output:"bcdeeorty"

Input:"hooplah"
Output:"ahhloop"
*/

func AlphabetSoup(str string) string {
	r := []rune(str)
	for i, v := range r {
		tmp := v
		var j int = 0
		for j = i - 1; j >= 0; j-- {
			if r[j] > tmp {
				r[j+1] = r[j]
			} else {
				break
			}
		}
		r[j+1] = tmp
	}
	return string(r)
}
