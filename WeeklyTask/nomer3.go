package main

import "fmt"

func main() {
	var angka [255]int
	input(&angka)
	reverse(&angka)
	fmt.Println(&angka)
	fmt.Println(palindrom(&angka))
}

func input(angka *[255]int) {
	for i := 0; i < 255; i++ {
		fmt.Scanln(&angka[i])
	}
}

func reverse(angka *[255]int) {
	for i := 0; i < 255/2; i++ {
		j := 255 - i - 1
		angka[i], angka[j] = angka[j], angka[i]
	}
}

func palindrom(angka *[255]int) bool {
	for i := 0; i < 255/2; i++ {
		if angka[i] != angka[(255/2)-i-1] {
			return false
		}
	}
	return true
}
