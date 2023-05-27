package main

import "fmt"

const nMax int = 2023

type pokemon struct {
	name                       string
	cp, hp, ivAtk, ivDef, ivHp int
}

type arrPokemon [nMax]pokemon

func main() {
	var T arrPokemon
	var N int
	var flag, namaX string
	fmt.Scan(&N)
	inputPokemon(&T, &N)
	fmt.Scan(&namaX, &flag)
	printPokemon(T, N)
	fmt.Println()
	mengurutkanPokemon(&T, N, flag)
	printPokemon(T, N)
	fmt.Printf("Total IV %s adalah %.4g", namaX, totalIV(T, N, namaX))
}

func inputPokemon(T *arrPokemon, N *int) {
	for i := 0; i < *N; i++ {
		fmt.Scan(&T[i].name, &T[i].cp, &T[i].hp, &T[i].ivAtk, &T[i].ivDef, &T[i].ivHp)
	}
}

func printPokemon(T arrPokemon, N int) {
	for i := 0; i < N; i++ {
		fmt.Println(T[i].name, T[i].cp, T[i].hp, T[i].ivAtk, T[i].ivDef, T[i].ivHp)
	}
}

func mengurutkanPokemon(T *arrPokemon, N int, flag string) {
	var pass, i int
	var temp pokemon
	pass = 1
	if flag == "CP" {
		for pass <= N-1 {
			i = pass
			temp = T[pass]
			for i > 0 && temp.cp > T[i-1].cp {
				T[i] = T[i-1]
				i--
			}
			T[i] = temp
			pass++
		}
	} else if flag == "HP" {
		for pass <= N-1 {
			i = pass
			temp = T[pass]
			for i > 0 && temp.hp > T[i-1].hp {
				T[i] = T[i-1]
				i--
			}
			T[i] = temp
			pass++
		}
	} else if flag == "IV_Atk" {
		for pass <= N-1 {
			i = pass
			temp = T[pass]
			for i > 0 && temp.ivAtk > T[i-1].ivAtk {
				T[i] = T[i-1]
				i--
			}
			T[i] = temp
			pass++
		}
	} else if flag == "IV_Def" {
		for pass <= N-1 {
			i = pass
			temp = T[pass]
			for i > 0 && temp.ivDef > T[i-1].ivDef {
				T[i] = T[i-1]
				i--
			}
			T[i] = temp
			pass++
		}
	} else if flag == "IV_HP" {
		for pass <= N-1 {
			i = pass
			temp = T[pass]
			for i > 0 && temp.ivHp > T[i-1].ivHp {
				T[i] = T[i-1]
				i--
			}
			T[i] = temp
			pass++
		}
	}
}

func totalIV(T arrPokemon, N int, namaX string) float64 {
	var keluar float64
	var idx int = -1
	for i := 0; i < N; i++ {
		if namaX == T[i].name {
			idx = i
		}
	}
	if idx != -1 {
		keluar = (float64((T[idx].ivAtk + T[idx].ivDef + T[idx].ivHp)) * 100) / 45
	} else {
		keluar = -9999
	}
	return keluar
}
