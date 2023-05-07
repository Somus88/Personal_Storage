package main

import "fmt"

const nMAX int = 1000

type himpunan struct {
	info    [nMAX]string
	nElemen int
}

func main() {
	var A, B, C, D himpunan
	createSet(&A)
	createSet(&B)
	intersection(A, B, &C)
	union(A, B, &D)
	printSet(C)
	printSet(D)
}

func createSet(set *himpunan) {
	var s string
	fmt.Scan(&s)
	for !isMember(*set, s) && s != "" {
		set.info[set.nElemen] = s
		set.nElemen++
		fmt.Scan(&s)
	}
}

func printSet(set himpunan) {
	for i := 0; i < set.nElemen; i++ {
		fmt.Print(set.info[i])
		if i != set.nElemen-1 {
			fmt.Print(" ")
		}
	}
	fmt.Println()
}

func isMember(set himpunan, s string) bool {
	for i := 0; i < set.nElemen; i++ {
		if set.info[i] == s {
			return true
		}
	}
	return false
}

func intersection(set1, set2 himpunan, set3 *himpunan) {
	for i := 0; i < set1.nElemen; i++ {
		for j := 0; j < set2.nElemen; j++ {
			if set1.info[i] == set2.info[j] {
				set3.info[set3.nElemen] = set1.info[i]
				set3.nElemen++
			}
		}
	}
}

func union(set1, set2 himpunan, set3 *himpunan) {
	for i := 0; i < set1.nElemen; i++ {
		if !isMember(*set3, set1.info[i]) {
			set3.info[set3.nElemen] = set1.info[i]
			set3.nElemen++
		}
	}
	for i := 0; i < set2.nElemen; i++ {
		if !isMember(*set3, set2.info[i]) {
			set3.info[set3.nElemen] = set2.info[i]
			set3.nElemen++
		}
	}
}
