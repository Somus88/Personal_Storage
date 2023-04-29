package main

import "fmt"

func main() {
	var bilangan int
	var jenis bool
	fmt.Scan(&bilangan)
	jenis = negatif(bilangan)
	fmt.Println(jenis)
}

func negatif(bilangan int) bool {
	if bilangan < 0 {
		return true
	}
	return false
}
