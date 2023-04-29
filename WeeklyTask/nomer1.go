package main

import (
	"fmt"
	"math"
)

type titik float64

func main() {
	var a, b, c, d titik
	var hasil float64
	fmt.Scanln(&a, &b, &c, &d)
	hasil = jarak(a, c) + jarak(b, d)
	fmt.Println(akar(hasil))
}

func jarak(p1, p2 titik) float64 {
	return float64((p1 - p2) * (p1 - p2))
}

func akar(x float64) float64 {
	return math.Sqrt(x)
}
