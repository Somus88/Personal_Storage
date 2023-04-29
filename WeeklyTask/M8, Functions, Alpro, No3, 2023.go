package main

import "fmt"

func main() {
	var bilangan int
	var jenis bool
	fmt.Scan(&bilangan)
	jenis = bukanNol(bilangan)
	fmt.Println(jenis)
}

func bukanNol(bilangan int) bool {
	if bilangan == 0 {
		return false
	}
	return true
}
