package main

import "fmt"

func main() {
	var huruf byte
	var vokal bool
	fmt.Scanf("%c", &huruf)
	vokal = hurufVokal(huruf)
	fmt.Println(vokal)
}

func hurufVokal(huruf byte) bool {
	if huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o' {
		return true
	} else if huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O' {
		return true
	} else {
		return false
	}
}
