package main

import "fmt"

type rectangle struct {
	length, width int
	color         string
	property      geometry
}

type geometry struct {
	area, perimeter int
}

func main() {
	var keluar rectangle
	isiData(&keluar)
	hitung(&keluar)
}

func isiData(persegi *rectangle) {
	fmt.Scanln(&persegi.length, &persegi.width, &persegi.color)
}

func hitung(persegi *rectangle) {
	persegi.property.area = persegi.length * persegi.width
	persegi.property.perimeter = (2 * persegi.length) + (2 * persegi.width)
	fmt.Println(persegi.property.area)
	fmt.Println(persegi.property.perimeter)
}
