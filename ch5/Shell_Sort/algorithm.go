package main
import "fmt"

func InsertionSubSort(L []int, k int) {
	for i:= k; i < len(L); i++ {
		current := L[i]
		position := i - k
		for position >= 0 && current < L[position] {
			L[position + k] = L[position]
			position -= k
		}
		L[position + k] = current
	}
}

func ShellSort(L []int, k []int) {
	for i:=0 ; i < len(k) ; i++ {
		InsertionSubSort(L, k[i])
	}
}

func main() {
	List := []int{4,3,2,0,12,10,2,9,8,-1,-2,3,6,58,8,34,54,62,61,54,50}
	k := []int{6,5,4,3,2,1}
	ShellSort(List, k)
	fmt.Println(List)
}