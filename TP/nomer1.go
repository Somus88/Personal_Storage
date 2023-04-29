package main

import "fmt"

func main() {
	var tgl1, bln1, thn1 int
	var tgl2, bln2, thn2 int

	inputTglPinjam(&tgl1, &bln1, &thn1)
	for valid(tgl1, bln1, thn1) {
		hitungTanggalKembali(tgl1, bln1, thn1, &tgl2, &bln2, &thn2)
		fmt.Println(tgl2, bln2, thn2)
		inputTglPinjam(&tgl1, &bln1, &thn1)
	}
}

func inputTglPinjam(tanggal, bulan, tahun *int) {
	fmt.Scanln(*&tanggal, *&bulan, *&tahun)
}

func valid(tanggal, bulan, tahun int) bool {
	var totalHari int
	if tahun > 0 && (bulan >= 1 && bulan <= 12) {
		getJumlahHari(bulan, tahun, &totalHari)
		if tanggal > 0 && tanggal <= totalHari {
			return true
		} else {
			fmt.Println("input tidak valid")
			return false
		}
	} else {
		fmt.Println("input tidak valid")
		return false
	}
}

func kabisat(tahun int) bool {
	if tahun%4 == 0 && tahun%100 != 0 || tahun%400 == 0 {
		return true
	} else {
		return false
	}
}

func getJumlahHari(bulan, tahun int, jmlHari *int) {
	if bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12 {
		*jmlHari = 31
	} else if bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11 {
		*jmlHari = 30
	} else if bulan == 2 {
		if kabisat(tahun) {
			*jmlHari = 29
		} else if !kabisat(tahun) {
			*jmlHari = 28
		}
	}
}

func hitungTanggalKembali(tanggal1, bulan1, tahun1 int, tanggal2, bulan2, tahun2 *int) {
	if valid(tanggal1, bulan1, tahun1) {
		*tanggal2 = tanggal1 + 3

	}
	getJumlahHari(bulan1, tahun1, &tanggal1)
	if *tanggal2 > tanggal1 {
		*bulan2 = bulan1 + 1
		*tanggal2 = *tanggal2 - tanggal1
	} else {
		*bulan2 = bulan1
	}
	if *bulan2 > 12 {
		*tahun2 = tahun1 + 1
		*bulan2 = *bulan2 - 12
	} else {
		*tahun2 = tahun1
	}
}
