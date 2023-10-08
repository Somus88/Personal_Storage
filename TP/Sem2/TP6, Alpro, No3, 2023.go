package main

import "fmt"

func main() {
	var x int
	var s string
	s = ""
	fmt.Scanln(&x)
	pola(x, 1, &s)
}

func pola(n, i int, s *string) {
	if i > n {
		return
	} else {
		*s = *s + "*"
		fmt.Println(*s)
		pola(n, i+1, s)
	}
}
