package main

import "fmt"

const max int = 10

type tabTes [max]int

func main() {
	var tes tabTes
	var b, c int
	fmt.Println("input batas & yg dicari")
	fmt.Scanln(&b, &c)
	fmt.Println("input aray")
	for i := 0; i < b; i++ {
		fmt.Scanln(&tes[i])
	}
	fmt.Println("ada di index:", binInt(tes, b, c))
	fmt.Println(binBool(tes, b, c))
}

func binInt(tes tabTes, b, c int) int {
	var left, right, mid int
	var found int
	left = 0
	right = b - 1
	found = -1
	for left <= right && found == -1 {
		mid = (left + right) / 2
		if c > tes[mid] {
			right = mid - 1
		} else if c < tes[mid] {
			left = mid + 1
		} else {
			found = mid
		}
	}
	return found
}

func binBool(tes tabTes, b, c int) bool {
	var left, right, mid int
	var found bool
	left = 0
	right = b - 1
	found = false
	for left <= right && found == false {
		mid = (left + right) / 2
		if c > tes[mid] {
			right = mid - 1
		} else if c < tes[mid] {
			left = mid + 1
		} else {
			found = true
		}
	}
	return found
}
