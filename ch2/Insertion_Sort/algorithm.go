package main

import "fmt"

func insertion_sort(List []int) []int {
	for i := 1; i < len(List); i++ {
		current := List[i]
		position := i - 1

		for position >= 0 && current < List[position] {
			List[position+1] = List[position]
			position -= 1
		}
		List[position+1] = current
	}
	return List
}

func main() {
	List := []int{5, 4, 1, 7, 4, 9, 10, 23, 12, 6, 3, 1}
	fmt.Println(insertion_sort(List))
}
