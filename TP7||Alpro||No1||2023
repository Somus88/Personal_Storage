package main

import "fmt"

func main() {
	var mean float64
	var min, max, n int
	hitung(&mean, &min, &max, &n)
	if n > 0 {
		fmt.Println(mean)
		fmt.Println(max)
		fmt.Println(min)
		fmt.Println(n)
	} else {
		fmt.Println("- - - -")
	}
}

func inputBilangan(bil *int) {
	fmt.Scanln(bil)
	for *bil <= -1 {
		fmt.Scanln(bil)
	}
}

func stop(bil int) bool {
	if bil == 0 {
		return true
	} else {
		return false
	}
}

func hitung(mean *float64, min, max, n *int) {
	var angka, total int
	inputBilangan(&angka)
	for !stop(angka) {
		total += angka
		*n++
		if total == angka {
			*min = angka
			*max = angka
		} else {
			if angka > *max {
				*max = angka
			}
			if angka < *min {
				*min = angka
			}
		}
		inputBilangan(&angka)
	}
	if *n > 0 {
		*mean = float64(total) / float64(*n)
	} else {
		*min = 0
		*mean = 0
		*max = 0
		*n = 0
	}
}
