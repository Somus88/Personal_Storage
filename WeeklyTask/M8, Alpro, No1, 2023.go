package main

import "fmt"

func main() {
	var n, m int
	var cek bool
	fmt.Scan(&n, &m)
	for cek = false; !cek; {
		fmt.Println(n)
		cek = n == m
		n++
	}
}
