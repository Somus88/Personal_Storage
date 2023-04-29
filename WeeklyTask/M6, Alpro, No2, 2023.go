package main

import "fmt"

func main() {
	var x, y int
	fmt.Scanln(&x, &y)
	if x < 0 {
		fmt.Println("Masukkan angka dengan benar")
	} else {
		prima(x, y, 2)
	}
}

func prima(x, y, i int) {
	if x > y {
		return
	} else {
		angkaPrima := true
		if i*i <= x && x%i == 0 {
			angkaPrima = false
		}
		if angkaPrima && x > 1 {
			fmt.Printf("%d ", x)
		}
		prima(x+1, y, i)
	}
}
