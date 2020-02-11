y
#include <iostream>


template <class T>
void swap(T& x, T& y {
	T temp = x;
	x = y;
	y = temp;
}


int main() {

	int x = 5;
	int y = 10;
	swap(x,y)
	std::cout<<x<<std::endl;
	std::cout<<y<<std::endl;
	return 0;
}
