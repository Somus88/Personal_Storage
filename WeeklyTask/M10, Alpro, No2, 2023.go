package main

import "fmt"

const max int = 30

type intArray struct {
	tabInt [max]int
	N      int
}

var array1, array2 intArray

func main() {
	inputArray(&array1)
	inputArray(&array2)
	sort(&array1)
	sort(&array2)
	fmt.Print(isSimilar(array1, array2))
}

func inputArray(T *intArray) {
	var x intArray
	i := 0
	fmt.Scan(&x.tabInt[i])
	for x.tabInt[i] != 0 {
		i++
		fmt.Scan(&x.tabInt[i])
	}
	x.N = i
	*T = x
}

func sort(T *intArray) {
	var pass, idx, i, temp int
	var x intArray
	pass = 1
	for pass <= x.N {
		idx = pass - 1
		i = pass
		for i < x.N {
			if x.tabInt[idx] < x.tabInt[i] {
				idx = i
			}
			i++
		}
		temp = x.tabInt[pass-1]
		x.tabInt[pass-1] = x.tabInt[idx]
		x.tabInt[idx] = temp
		pass++
	}
}

func isSimilar(T1, T2 intArray) bool {
	i := 0
	if T1.N == T2.N {
		for i < T1.N {
			if T1.tabInt[i] == T2.tabInt[i] {
				return true
			} else {
				return false
			}
			i++
		}
	} else {
		return false
	}
	return false
}
