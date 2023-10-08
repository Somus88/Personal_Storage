package main

import "fmt"

func main() {
	var bil, i int
	var hasil float64
	fmt.Scanln(&bil)
	if bil == 0 {
		fmt.Println(0)
	} else {
		average(bil, i, &hasil)
	}

}

func average(bil, i int, hasil *float64) {
	if bil == 0 {
		fmt.Println(*hasil / float64(i))
	} else {
		total := bil % 10
		*hasil += float64(total)
		average(bil/10, i+1, hasil)
	}
}
