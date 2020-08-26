#include <iostream>

void oddeven(int a,int b) {
	if(a%2 == 0 && b%2 == 0) {
		std::cout << "x genap dan y genap\n";	
	} else if(a%2 !=0 && b%2 == 0) {
		std::cout << "x ganjil dan y genap\n";
	} else if(a%2 == 0 && b%2 != 0) {
		std::cout << "x genap dan x ganjil\n";
	} else {
		std::cout << "x ganjil dan y ganjil\n" ;
	}
}

int main(){
	int x,y;
	std::cout << "Input nilai x : ";
	std::cin >> x;
	std::cout << "Input nilai y : ";
	std::cin >> y;
	oddeven(x,y);

	return 0;
	
}
