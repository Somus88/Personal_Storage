package main

import (
	"fmt"
)

type nasabah struct {
	id_nasabah   string
	nama_nasabah string
	nama_bank    string
	norek        string
}

const limit int = 2022

type tabNasabah [limit]struct {
	id, nama, bank, norek nasabah
}

func main() {
	var t1 tabNasabah
	var N int
	var X string
	N = 10
	addNasabah(&t1, &N)
	fmt.Scan(&X)
	cetak(&t1, &N, &X)
}

func addNasabah(t *tabNasabah, N *int) {
	for i := 0; i < *N*2; i++ {
		fmt.Scanf("%s %s %s %s", &t[i].id.id_nasabah, &t[i].nama.nama_nasabah, &t[i].bank.nama_bank, &t[i].norek.norek)
	}
}

func cetak(t *tabNasabah, N *int, X *string) {
	for i := 0; i < *N*2; i++ {
		if t[i].id.id_nasabah == *X || t[i].nama.nama_nasabah == *X || t[i].bank.nama_bank == *X || t[i].norek.norek == *X {
			fmt.Println("Kode:", t[i].id.id_nasabah, ",", "Nasabah:", t[i].nama.nama_nasabah, ",", "Bank:", t[i].bank.nama_bank, ",", "Rek:", t[i].norek.norek)
		}
	}
}
