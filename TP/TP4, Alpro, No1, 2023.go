package main

import (
	"fmt"
	"math"
)

func z(x int, y int) float64 {
	var z1 float64
	z1 = math.Sqrt(((3 * float64(x)) * (6 * float64(y)) / (4 * float64(y))))
	return z1
}

func main() {
	var a, b int
	fmt.Scanln(&a, &b)
	fmt.Println(z(a, b), z(b, a))
}
