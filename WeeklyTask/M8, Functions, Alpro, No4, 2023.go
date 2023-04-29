package main

import (
	"fmt"
	"math"
)

func main() {
	var luas, diameter float64
	fmt.Scan(&luas)

	diameter = diameterlingkaran(luas)
	fmt.Println(diameter)
}

func diameterlingkaran(l float64) float64 {
	const phi float64 = 3.14
	var diameter float64
	diameter = math.Sqrt(4) * math.Sqrt(l/phi)
	return diameter
}
