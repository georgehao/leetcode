package alphabet_soup

import (
	"fmt"
	"testing"
)

func Test_AlphabetSoup(t *testing.T) {
	fmt.Println(AlphabetSoup("hello"))
	fmt.Println(AlphabetSoup("world"))
	fmt.Println(AlphabetSoup("coderbyte"))
	fmt.Println(AlphabetSoup("hooplah"))
}
