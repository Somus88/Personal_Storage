package main

import (
	"fmt"
)

type student struct {
	name                            string
	math, indo, eng, sains, average float64
}

type arrStudent [2048]student

func main() {
	var T arrStudent
	var n int
	entryStudent(&T, &n)
	calculateAverage(&T, n)
	printTop3(T, n)
	printMax(T, n)
}

func entryStudent(T *arrStudent, n *int) {
	var s string
	fmt.Scan(&s)
	for s != "STOP" {
		T[*n].name = s
		fmt.Scan(&T[*n].math, &T[*n].indo, &T[*n].eng, &T[*n].sains)
		*n++
		fmt.Scan(&s)

	}
}

func calculateAverage(T *arrStudent, n int) {
	for i := 0; i < n; i++ {
		T[i].average = (T[i].math + T[i].indo + T[i].eng + T[i].sains) / 4
	}
}

func max(T arrStudent, n int, flag string) int {
	var idx int
	idx = 0
	if flag == "math" {
		max := T[idx].math
		for i := 1; i < n; i++ {
			if max < T[i].math {
				max = T[i].math
				idx = i
			}
		}
	} else if flag == "ind" {
		max := T[idx].indo
		for i := 1; i < n; i++ {
			if max < T[i].indo {
				max = T[i].indo
				idx = i
			}
		}
	} else if flag == "eng" {
		max := T[idx].eng
		for i := 1; i < n; i++ {
			if max < T[i].eng {
				max = T[i].eng
				idx = i
			}
		}
	} else if flag == "sains" {
		max := T[idx].sains
		for i := 1; i < n; i++ {
			if max < T[i].sains {
				max = T[i].sains
				idx = i
			}
		}
	}
	return idx
}

func rangking(T *arrStudent, n int) {
	var idx, i, j int
	var temp student
	i = 1
	for i <= n-1 {
		idx = i - 1
		j = i
		for j < n {
			if T[idx].average < T[j].average {
				idx = j
			}
			j++
		}
		temp = T[idx]
		T[idx] = T[i-1]
		T[i-1] = temp
		i++

	}

}

func printTop3(T arrStudent, n int) {
	rangking(&T, n)
	for i := 1; i <= 3; i++ {
		fmt.Printf("Rangking %d: %s rata-rata %g \n", i, T[i-1].name, T[i-1].average)
	}
}

func printMax(T arrStudent, n int) {
	fmt.Printf("Nilai Matematika tertinggi diraih oleh %s \n", T[max(T, n, "math")].name)
	fmt.Printf("Nilai Bahasa Indonesia tertinggi diraih oleh %s \n", T[max(T, n, "ind")].name)
	fmt.Printf("Nilai Bahasa Inggris tertinggi diraih oleh %s \n", T[max(T, n, "eng")].name)
	fmt.Printf("Nilai pelajaran IPA/IPS tertinggi diraih oleh %s \n", T[max(T, n, "sains")].name)
}
