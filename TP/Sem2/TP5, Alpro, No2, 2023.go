package main

import (
	"fmt"
	"math"
)

func membeliKain(uangAwal float64, tUang, tPengeluaran *float64) {
	*tPengeluaran = uangAwal / 4
	*tUang = uangAwal - (uangAwal / 4)
}

func membeliBenangJahit(uangAwal float64, tUang, tPengeluaran *float64) {
	*tPengeluaran = (uangAwal / 20) + *tPengeluaran
	*tUang = *tUang - (uangAwal / 20)
}

func membuatPolaBaju(uangAwal float64, tUang, tPengeluaran *float64) {
	*tPengeluaran = 2*(uangAwal/200) + *tPengeluaran
	*tUang = *tUang - 2*(uangAwal/200)
}

func menjahitBaju(uangAwal float64, tUang, tPengeluaran *float64) {
	*tPengeluaran = 4*(uangAwal/200) + *tPengeluaran
	*tUang = *tUang - 4*(uangAwal/200)
}

func mengemasBaju(uangAwal float64, tUang, tPengeluaran *float64) {
	*tPengeluaran = 2*(3*uangAwal/200) + *tPengeluaran
	*tUang = *tUang - 2*(3*uangAwal/200)
}

func mendistribusikan(uangAwal float64, tUang, tPemasukan, tPengeluaran *float64) {
	*tPengeluaran = (3 * uangAwal / 200) + *tPengeluaran
	*tPemasukan = uangAwal / 2
	*tUang = *tUang - (3 * uangAwal / 200) + *tPemasukan
}

func main() {
	var modal, masuk, keluar, total float64
	fmt.Scanln(&modal)
	membeliKain(modal, &total, &keluar)
	membeliBenangJahit(modal, &total, &keluar)
	membuatPolaBaju(modal, &total, &keluar)
	menjahitBaju(modal, &total, &keluar)
	mengemasBaju(modal, &total, &keluar)
	mendistribusikan(modal, &total, &masuk, &keluar)
	if keluar >= 1000000 {
		fmt.Println(int(keluar), int(masuk), int(total))
	} else if keluar < 1000000 {
		fmt.Println(math.Ceil(keluar), int(masuk), int(total))
	}
}
