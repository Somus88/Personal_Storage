package main

import "fmt"

func main() {
	var x string
	fmt.Scanln(&x)
	fmt.Print(lowercase(x))
}

func lowercase(x string) string {
	if len(x) == 0 {
		return ""
	} else {
		huruf := x[0]
		if huruf >= 'A' && huruf <= 'Z' {
			huruf += 32
		}
		return string(huruf) + lowercase(x[1:])
	}
}
