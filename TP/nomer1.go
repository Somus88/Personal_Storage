package main

import (
	"fmt"
	"math"
)

type point struct {
	x, y float64
}

func main() {
	var a, b, c, d point
	fmt.Scanln(&a.x, &a.y, &b.x, &b.y)
	fmt.Scanln(&c.x, &c.y, &d.x, &d.y)
	jarak1 := jarak(a, b)
	jarak2 := jarak(c, d)
	if jarak1 < jarak2 {
		fmt.Printf("Titik terdekat adalah titik A(%.0f, %.0f) dengan B(%.0f, %.0f) dengan jarak %.1f.", a.x, a.y, b.x, b.y, jarak1)
	} else {
		fmt.Printf("Titik terdekat adalah titik C(%.0f, %.0f) dengan D(%.0f, %.0f) dengan jarak %.1f.", c.x, c.y, d.x, d.y, jarak2)
	}
}

func jarak(titik1, titik2 point) float64 {
	return math.Sqrt((titik1.x-titik2.x)*(titik1.x-titik2.x) + (titik1.y-titik2.y)*(titik1.y-titik2.y))
}
