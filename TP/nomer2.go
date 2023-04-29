package main

import "fmt"

func jumlahBus_1303220104(penumpang, kapasitas int) int {
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
	fmt.Println(jumlahBus_1303220104(x, y))
}
