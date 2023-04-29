package main

import "fmt"

func main() {
	var a, b, c int
	a = 2
	b = 50
	for a <= b {
		c += a
		a++
	}
	fmt.Println(c)
}
