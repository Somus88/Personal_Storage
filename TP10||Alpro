package main

import "fmt"

const nMAX int = 12345

type prodi struct {
	nama, akreditasi      string
	tahun, aktif, lulusan int
}

type fakultas struct {
	nama     string
	arrProdi [nMAX - 1]prodi
	N        int
}

var fif fakultas
var j int
var x string = "cukup"

func main() {
	buatFakultas(&fif)
	for j := 0; j <= 9; j++ {
		daftarProdi(&fif)
	}
	fmt.Printf("Prodi %s memiliki mahasiswa dan lulusan terbanyak yaitu %d \n", terbanyak(fif).nama, terbanyak(fif).aktif+terbanyak(fif).lulusan)
	fmt.Println("Prodi termuda adalah", fif.arrProdi[termuda(fif)].nama)
	fmt.Printf("Akreditas Prodi terbanyak di Fakultas %s adalah %s \n", fif.nama, prestasi(fif))
	cetakProdi(fif, x)
}

func buatFakultas(fif *fakultas) {
	fmt.Scanln(&fif.nama)
	fif.N = 0
}

func daftarProdi(fif *fakultas) {
	var nama string
	var aktif, lulusan int
	fmt.Scan(&nama, &fif.arrProdi[fif.N].akreditasi, &fif.arrProdi[fif.N].tahun, &aktif, &lulusan)
	if cekProdi(nama, *fif) != -1 {
		fif.arrProdi[cekProdi(nama, *fif)].aktif += aktif
		fif.arrProdi[cekProdi(nama, *fif)].lulusan += lulusan
	} else {
		fif.arrProdi[fif.N].nama = nama
		fif.arrProdi[fif.N].aktif = aktif
		fif.arrProdi[fif.N].lulusan = lulusan
		fif.N++
	}
}

func cekProdi(s string, fif fakultas) int {
	var j int
	j = 0
	for j < fif.N && fif.arrProdi[j].nama != s {
		j++
	}
	if j == fif.N {
		return -1
	} else {
		return j
	}
}

func terbanyak(fif fakultas) prodi {
	var maxJumlah, totalJumlah int
	var nama string
	var prodiTerbanyak prodi
	for i := 0; i < fif.N; i++ {
		nama = fif.arrProdi[i].nama
		totalJumlah = fif.arrProdi[i].aktif + fif.arrProdi[i].lulusan
		for j := i + 1; j < fif.N; j++ {
			if fif.arrProdi[j].nama == nama {
				totalJumlah += fif.arrProdi[j].aktif + fif.arrProdi[j].lulusan
			}
		}
		if totalJumlah > maxJumlah {
			maxJumlah = totalJumlah
			prodiTerbanyak = fif.arrProdi[i]
		}
	}
	return prodiTerbanyak
}

func termuda(fif fakultas) int {
	var idx int
	var tahunTerkecil int
	for i := 0; i < fif.N; i++ {
		tahun := fif.arrProdi[i].tahun
		for j := i + 1; j < fif.N; j++ {
			if fif.arrProdi[j].tahun > tahun {
				tahun = fif.arrProdi[j].tahun
			}
		}
		if tahun >= tahunTerkecil {
			tahunTerkecil = tahun
			idx = i
		}
	}
	return idx
}

func prestasi(fif fakultas) string {
	var a, b, c int
	for i := 0; i < fif.N; i++ {
		if fif.arrProdi[i].akreditasi == "unggul" {
			a++
		} else if fif.arrProdi[i].akreditasi == "baik" {
			b++
		} else if fif.arrProdi[i].akreditasi == "cukup" {
			c++
		}
	}
	if a >= b && a >= c {
		return "unggul"
	} else if b >= a && b >= c {
		return "baik"
	} else {
		return "cukup"
	}
}

func cetakProdi(fif fakultas, x string) {
	for i := 0; i < fif.N; i++ {
		if fif.arrProdi[i].akreditasi == x {
			fmt.Print(fif.arrProdi[i].nama, " ")
		}
	}
}
