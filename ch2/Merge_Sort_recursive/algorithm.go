package main

import "fmt"

func split(L []int, low int, high int){
	if low < high {
		mid:=(low+high)/2
		split(L, low, mid)
		split(L, mid+1, high)
		merge(L, low, mid, high)
	}
}

func merge(L []int, low int, mid int, high int) {
	first:= low
	second:= mid + 1
	temp:= []int{}
	for (first <= mid) && (second<=high) {
		if L[first] < L[second] {
			temp = append(temp, L[first])
			first = first + 1
		} else {
			temp = append(temp, L[second])
			second = second + 1
		}
	}
	if first <= mid {
		for first <= mid {
			temp = append(temp,L[first])
			first = first + 1
		}
	} else {
		for second <= high {
			temp = append(temp,L[second])
			second = second + 1
		}
	}
	for i:=low; i<=high; i++ {
		L[i] = temp[i]
	}
}

func main() {
	L := []int{5,4,6,7,1,3}
	split(L, 0, 5)
	fmt.Println(L)
}