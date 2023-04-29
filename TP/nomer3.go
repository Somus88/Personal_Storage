package main

import "fmt"

func cumlaude_1303220104(ipk float64, masaStudi int, publikasi bool) bool {
	var kriteria bool
	if ipk >= 3.51 && ipk <= 4.00 && masaStudi <= 8 && publikasi == true {
		kriteria = true
	}
	return kriteria
}

func sangatMemuaskan_1303220104(ipk float64, masaStudi int, publikasi bool) bool {
	var kriteria bool
	if ipk >= 2.76 && ipk <= 3.5 && masaStudi <= 14 && (publikasi == true || publikasi == false) {
		kriteria = true
	}
	return kriteria
}

func memuaskan_1303220104(ipk float64, masaStudi int, publikasi bool) bool {
	var kriteria bool
	if ipk >= 2.00 && ipk <= 2.75 && masaStudi <= 14 && (publikasi == true || publikasi == false) {
		kriteria = true
	}
	return kriteria
}

func main() {
	var x float64
	var y int
	var z bool
	fmt.Scanln(&x, &y, &z)
	if cumlaude_1303220104(x, y, z) == true {
		fmt.Println("Cumlaude")
	} else if memuaskan_1303220104(x, y, z) == true {
		fmt.Println("Memuaskan")
	} else if sangatMemuaskan_1303220104(x, y, z) == true || cumlaude_1303220104(x, y, z) == false {
		fmt.Println("Sangat memuaskan")
	}
}
