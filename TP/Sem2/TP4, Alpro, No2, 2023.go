package main

import "fmt"

func jumlahBus(penumpang, kapasitas int) int {
	var bis int
	bis = 0
	for penumpang > 0 {
		bis++
		penumpang = penumpang - kapasitas
	}
	return bis
}

func main() {
	var x, y int
	fmt.Scanln(&x, &y)
	fmt.Println(jumlahBus(x, y))
}
