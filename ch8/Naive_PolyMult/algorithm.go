package main

import "fmt"

// Keyword arguments:
// P -- The dictionary of first polynomial
// Q -- The dictionary of second polynomial

// return dictionary with keys as powers of X
// and values as coefficient associated with the
// respective keys.

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
		fmt.Print(key)
		fmt.Printf("-")
		fmt.Println(value)
	}
}
