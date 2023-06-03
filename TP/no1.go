package main

import "fmt"

const nMax int = 10

type negara struct {
	nama                string
	t2021, t2022, t2023 int
}

type tabNegara [nMax]negara

func main() {
	t := nyatakan()
	input(&t)
	if !cekNol(t) {
		sort(&t)
	}
	print(t)
}

func nyatakan() tabNegara {
	t := tabNegara{}
	t[0] = negara{nama: "Thailand"}
	t[1] = negara{nama: "Vietnam"}
	t[2] = negara{nama: "Cambodia"}
	t[3] = negara{nama: "Singapore"}
	t[4] = negara{nama: "Philippines"}
	t[5] = negara{nama: "Malaysia"}
	t[6] = negara{nama: "Laos"}
	t[7] = negara{nama: "Brunei"}
	t[8] = negara{nama: "Indonesia"}
	t[9] = negara{nama: "Myanmar"}
	return t
}

func input(t *tabNegara) {
	var negara string
	var tahun, gdp int
	negara = "Malaysia"
	for !cekIsi(*t, negara) {
		fmt.Scanln(&negara, &tahun, &gdp)
		for i := 0; i < nMax; i++ {
			if negara == t[i].nama {
				if tahun == 2021 {
					t[i].t2021 = gdp
				} else if tahun == 2022 {
					t[i].t2022 = gdp
				} else if tahun == 2023 {
					t[i].t2023 = gdp
				}
			}
		}
	}
}

func cekIsi(t tabNegara, s string) bool {
	for i := 0; i < nMax; i++ {
		if s == t[i].nama {
			return false
		}
	}
	return true
}

func cekNol(t tabNegara) bool {
	for i := 0; i < nMax; i++ {
		if t[i].t2023 == 0 {
			return true
		}
	}
	return false
}

func sort(t *tabNegara) {
	var idx, i, j int
	var temp negara
	i = 0
	for i < nMax {
		idx = i
		j = i + 1
		for j < nMax {
			if t[idx].t2023 < t[j].t2023 {
				idx = j
			}
			j++
		}
		temp = t[idx]
		t[idx] = t[i]
		t[i] = temp
		i++
	}
}

func print(t tabNegara) {
	for i := 0; i < nMax; i++ {
		fmt.Println(t[i].nama, t[i].t2021, t[i].t2022, t[i].t2023)
	}
}
