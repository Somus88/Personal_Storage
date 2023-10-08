package main

import "fmt"

const max int = 52

func main() {
	var kartu int
	var tabKartu [max]int
	fmt.Scan(&kartu)
	n := 0
	for kartu > 0 {
		tabKartu[n] = kartu
		n++
		fmt.Scan(&kartu)
	}
	for i, j := 0, n-1; i < j; i, j = i+1, j-1 {
		tabKartu[i], tabKartu[j] = tabKartu[j], tabKartu[i]
	}
	for i := 0; i < n; i++ {
		fmt.Print(tabKartu[i], " ")
	}
}
