package main

import "fmt"

func main() {
	var x, y int
	fmt.Println("Kapasitas rak dan jumlah buku saat ini?")
	fmt.Scanln(&x, &y)
	if x > y {
		fmt.Println("Sisa rak kosong", x-y)
		beliBuku(x, y)
	} else {
		fmt.Println("Rak penuh")
	}
}

func beliBuku(N, M int) {
	var A, B int
	A = N - (M + 1)
	B = 1
	if A == 0 {
		fmt.Println("beli", B, "buku, rak buku penuh")
	} else {
		fmt.Println("beli", B, "sisa", A)
		beliBuku(N, M+1)
	}
}
