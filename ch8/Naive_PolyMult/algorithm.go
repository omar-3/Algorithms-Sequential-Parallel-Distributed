package main

import "fmt"

func naive_poly_mult(P map[int]int, Q map[int]int) map[int]int {
	M := map[int]int{}
	for keyP, valueP := range P {
		for keyQ, valueQ := range Q {
			if _, ok := M[keyP+keyQ]; ok {
				M[keyP+keyQ] = M[keyP+keyQ] + valueP*valueQ
			} else {
				M[keyP+keyQ] = valueP * valueQ
			}
		}
	}
	return M
}

func main() {
	P := map[int]int{
		0: -5,
		1: 2,
		2: 3,
	}

	Q := map[int]int{
		0: 4,
		1: -1,
		2: 0,
		3: 1,
	}

	M := naive_poly_mult(P, Q)

	for key, value := range M {
		fmt.Println(key)
		fmt.Println(value)
		fmt.Println("------------")
	}
}
