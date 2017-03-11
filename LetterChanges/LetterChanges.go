/* Challenge
 * Using the Go language, have the function LetterChanges(str) take the str parameter being passed and modify it using the following algorithm.
*  Replace every letter in the string with the letter following it in the alphabet (ie. c becomes d, z becomes a).
 * Then capitalize every vowel in this new string (a, e, i, o, u) and finally return this modified string.
 *
 * Sample Test Cases
 * Input:"hello*3"
 * Output:"Ifmmp*3"
 *
 * Input:"fun times!"
 * Output:"gvO Ujnft!"
*/

func LetterChanges(str string) string {
	runes := []rune(str)
	for i, v := range runes {
		if v >= 'a' && v <= 'z' {
			tmp := 'a' + (v+1-'a')%26
			if tmp == 'a' || tmp == 'e' || tmp == 'i' || tmp == 'o' || tmp == 'u' {
				tmp = tmp - 32
			}
			runes[i] = tmp
		}
	}
	return string(runes)
}
