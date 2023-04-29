package main

import "fmt"

const nMAX int = 2022

type student struct {
	name, sid string
	gpa       float64
}

var tabMhs [nMAX - 1]student

func scanArray(tabMhs *[nMAX - 1]student, n *int, z int) {
	var x student
	for i := 0; i != z; i++ {
		fmt.Scanln(&x.sid, &x.name, &x.gpa)
		tabMhs[*n] = x
		*n++

	}
}

func sortingGPA(tabMhs *[nMAX - 1]student, N int) {
	var pass, idx, i int
	var temp student
	pass = 1
	for pass <= N-1 {
		idx = pass - 1
		i = pass
		for i < N {
			if tabMhs[idx].gpa > tabMhs[i].gpa {
				idx = i
			}
			i++
		}
		temp = tabMhs[pass-1]
		tabMhs[pass-1] = tabMhs[idx]
		tabMhs[idx] = temp
		pass++
	}
}

func printArray(tabMhs [nMAX - 1]student, n int) {
	for i := 0; i < n; i++ {
		fmt.Println(tabMhs[i].sid, tabMhs[i].name, tabMhs[i].gpa)
	}
}

func main() {
	var n, z int
	fmt.Scanln(&z)
	scanArray(&tabMhs, &n, z)
	sortingGPA(&tabMhs, n)
	printArray(tabMhs, n)
}
