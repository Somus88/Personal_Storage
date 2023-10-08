package main

import "fmt"

func main() {
	var a int
	fmt.Scanln(&a)
	fmt.Println(abc(a))
}

func abc(x int) string {
	var a int
	var s string
	s = ""
	if x == 0 {
		return s
	} else {
		a = x % 2
		x = x / 2
		if a == 0 {
			s = abc(x) + "0"
		} else {
			s = abc(x) + "1"
		}
	}
	return s
}
