package main

import "fmt"

func faktorial(masukan *int) {
	if *masukan == 0 {
		*masukan = 1
		return
	}
	temp := *masukan - 1
	faktorial(&temp)
	*masukan = (*masukan) * temp
}

func permutasi(a, b int) int {
	var c int
	c = a - b
	faktorial(&a)
	faktorial(&c)
	z := a / c

	return z

}
func main() {
	var x, y int
	fmt.Scanln(&x, &y)
	fmt.Println(permutasi(x, y))
}
