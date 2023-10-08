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

/*
Vietnam 2022 615
Malaysia 2022 163
Indonesia 2022 884
Philippines 2023 37
Indonesia 2023 1893
Philippines 2021 286
Laos 2021 98
Myanmar 2022 135
Singapore 2021 357
Vietnam 2021 638
Thailand 2021 724
Cambodia 2021 415
Malaysia 2021 176
Brunei 2023 80
Thailand 2022 575
Malaysia 2023 649
Laos 2022 740
Vietnam 2023 49
Thailand 2023 870
Japan 2021

output matches the expected output

Thailand 724 575 870
Vietnam 638 615 49
Cambodia 415 0 0
Singapore 357 0 0
Philippines 286 0 37
Malaysia 176 163 649
Laos 98 740 0
Brunei 0 0 80
Indonesia 0 884 1893
Myanmar 0 135 0

2

Brunei 2023 889
Singapore 2021 676
Cambodia 2021 881
Myanmar 2021 950
Singapore 2023 712
Philippines 2021 152
Malaysia 2022 282
Philippines 2023 120
Indonesia 2023 62
Laos 2022 497
Vietnam 2021 29
Cambodia 2023 277
Brunei 2022 469
Myanmar 2023 480
Thailand 2023 393
Thailand 2021 361
Laos 2021 108
Laos 2023 31
Malaysia 2023 968
Indonesia 2021 543
Vietnam 2023 590
Cambodia 2022 293
Brunei 2021 333
Singapore 2022 82
Myanmar 2022 354
Malaysia 2021 476
Thailand 2022 803
Philippines 2022 913
Vietnam 2022 711
Indonesia 2022 879
Spain 2023

output matches the expected output
Malaysia 476 282 968
Brunei 333 469 889
Singapore 676 82 712
Vietnam 29 711 590
Myanmar 950 354 480
Thailand 361 803 393
Cambodia 881 293 277
Philippines 152 913 120
Indonesia 543 879 62
Laos 108 497 31
*/
