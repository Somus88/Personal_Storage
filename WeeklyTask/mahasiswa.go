package main

import "fmt"

const nMAX int = 1000

type lulusan struct {
	nama, nim string
	semester  int
	eprt, ipk float64
}

type tabLulus [nMAX]lulusan

func isiData(t *tabLulus, n int) {
	var nim string
	n = 0
	fmt.Scan(&n)
	for nim != "none" && n <= nMAX {
		t[n].nim = nim
		fmt.Scan(t[n].nama, t[n].eprt, t[n].semester, t[n].ipk)
		n++
		fmt.Scan(&nim)
	}
}

func maxEPRT(t tabLulus, n int) float64 {
	var max float64
	var i int
	max = t[0].eprt
	i = 1
	for i < n {
		if max < t[i].eprt {
			max = t[i].eprt
		}
		i++
	}
	return max
}

func minIPK(t tabLulus, n int) float64 {
	var min lulusan
	var i int
	min = t[0]
	i = 1
	for i < n {
		if min.ipk < t[i].ipk {
			min = t[i]
		}
		i++
	}
	return min.ipk
}

func rataan(t tabLulus, n int) float64 {
	var jum float64
	var i int
	jum = 0
	i = 1
	for i <= n {
		jum = jum + float64(t[i].semester)
		i++
	}
	return jum / float64(n)
}

func main() {
	var dataMHS tabLulus
	var nMHS int
	var eprtTertinggi, ipkTerendah, rerataSemester float64

	isiData(&dataMHS, nMHS)
	eprtTertinggi = maxEPRT(dataMHS, nMHS)
	ipkTerendah = minIPK(dataMHS, nMHS)
	rerataSemester = rataan(dataMHS, nMHS)
	fmt.Print(eprtTertinggi, ipkTerendah, rerataSemester)
}
