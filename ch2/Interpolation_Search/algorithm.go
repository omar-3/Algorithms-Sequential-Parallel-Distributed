package main

import "fmt"

//apparently there is no generics in golang

func interpolation_search(L []int, X int) int {
	low := 0
	high := len(L) - 1
	for low <= high {
		i := ((((X - L[low]) * (high - low)) / (L[high] - L[low])) + low)
		if L[i] == X {
			return i
		} else if X < L[i] {
			high = i - 1
		} else if X > L[i] {
			low = i + 1
		}
	}
	return -1
}

func main() {
	List := []int{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 18}
	x := interpolation_search(List, 5)
	fmt.Println(x)
}
