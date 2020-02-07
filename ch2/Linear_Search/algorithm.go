package main

import "fmt"

func linear_search(List []int, X int) int {
	for i:= 1; i < len(List); i++ {
		if List[i] == X {
			return i
		}
	}
	return -1
}

func main() {
	List := []int{5, 4, 1, 7, 4, 9, 10, 23, 12, 6, 3, 1}
	fmt.Println(linear_search(List, 23))
}