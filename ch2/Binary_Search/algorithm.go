package main

import "fmt"

func binary_search(List []int, X int) int {
	low := 0
	high := len(List) - 1
	for low <= high {
		mid := (low+high)/2
		if List[mid] == X {
			return mid
		} else if List[mid] > X {
			high = mid - 1
		} else if List[mid] < X {
			low = mid + 1
		}
	}
	return -1
}

func main() {
	List := []int{2,6,9,10,13,16,18,19,23,24,29,31,39,41,46,51,56,62,67,70,74}
	fmt.Println(binary_search(List, 23))
}