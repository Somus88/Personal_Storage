package main

import "fmt"

func main() {
	var b1, b2 int
	var jenis bool
	fmt.Scan(&b1, &b2)
	jenis = kelipatan(b1, b2)
	fmt.Println(jenis)
}

func kelipatan(b1, b2 int) bool {
	if b1%b2 == 0 {
		return true
	}
	return false
}
