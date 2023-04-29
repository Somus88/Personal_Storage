package main

import "fmt"

const limit int = 10

type tabGol [limit]int

func main() {
	var t1, t2 tabGol
	var n1, n2 int
	inputData(&t1, &n1)
	inputData(&t2, &n2)
	fmt.Println(rataan(t1, n1))
	fmt.Println(rataan(t2, n2))
}

func inputData(t *tabGol, n *int) {
	*n = 0
	fmt.Scan(&t[*n])
	for t[*n] >= 0 {
		fmt.Scan(&t[*n])
		*n++
	}
}

func rataan(t tabGol, n int) float64 {
	jumlahWin := 0
	for i := 0; i < n; i++ {
		jumlahWin += t[n]
	}
	return float64(jumlahWin) / float64(n)
}
