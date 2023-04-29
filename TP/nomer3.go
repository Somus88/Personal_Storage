package main

import "fmt"

const max int = 2500

type AsDos_T struct {
	kodeAsdos, namaAsdos, kodeMataKuliah string
	nimAsdos, jumlahMahasiswa            int
}

type tabAsDos_T [max]AsDos_T

func main() {
	var mk string
	var dataAsDos_T tabAsDos_T
	var n int
	bacaAsDos(&dataAsDos_T, &n)
	fmt.Scanln(&mk)
	cetakAsDos(dataAsDos_T, n, mk)
}

func bacaAsDos(tabel *tabAsDos_T, n *int) {
	*n = 0
	fmt.Scanln(&tabel[*n].kodeAsdos, &tabel[*n].namaAsdos, &tabel[*n].nimAsdos, &tabel[*n].kodeMataKuliah, &tabel[*n].jumlahMahasiswa)
	for tabel[*n].kodeAsdos != "XXX" && *n < max {
		*n++
		fmt.Scanln(&tabel[*n].kodeAsdos, &tabel[*n].namaAsdos, &tabel[*n].nimAsdos, &tabel[*n].kodeMataKuliah, &tabel[*n].jumlahMahasiswa)
	}
}

func cetakAsDos(tabel tabAsDos_T, n int, mk string) {
	for i := 0; i < n; i++ {
		if tabel[i].kodeMataKuliah == mk {
			fmt.Printf("%s, %s\n", tabel[i].namaAsdos, tabel[i].kodeAsdos)
		}
	}
}
