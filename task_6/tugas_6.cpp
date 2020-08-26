#include <iostream>

int calc(int a, int b) {
	int res;
	if(a >= b){
		res = a+b;
	} else {
		res = a-b;
	}	
	return res;
}


int main () {
	int x,z;
	std::cout << "Inputkan nilai x : ";
	std::cin >> x;
	std::cout << "Inputkan nilai z : ";
	std::cin >> z;
	std::cout << "Hasil : " << calc(x,z) << "\n";
	return 0;
}
