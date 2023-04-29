package main

import "fmt"

const max int = 100

type tabBunga [max]string

func main() {
	var dataBunga tabBunga
	var n int
	var X, y string
	fmt.Scanln(&n, &X)
	for i := 0; i <= n; i++ {
		fmt.Scanln(&dataBunga[i])
	}
	fmt.Println("pengganti")
	rename(&dataBunga, n, X)
	fmt.Println(dataBunga)
	fmt.Scanln(&y)
	delete(&dataBunga, &n, y)
	fmt.Println(dataBunga)
}

func cari(t tabBunga, n int, bunga string) int {
	var i, found int
	found = -1
	i = 0
	for i < n && found == -1 {
		if t[i] == bunga {
			found = i
		}
		i++
	}
	return found
}

func rename(t *tabBunga, n int, X string) {
	var found int
	found = cari(*t, n, X)
	if found == -1 {
		fmt.Print("Bunga tidak ditemukan")
	} else {
		fmt.Scanln(&t[found])
	}
}

func delete(t *tabBunga, n *int, X string) {
	var found, i int
	found = cari(*t, *n, X)
	if found == -1 {
		fmt.Print("Bunga tidak ditemukan")
	} else {
		i = found
		for i < *n-1 {
			t[i] = t[i+1]
			i++
		}
		t[*n-1] = t[*n]
		t[*n] = ""
		*n = *n - 1
	}
}
