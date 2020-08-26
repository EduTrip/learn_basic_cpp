#include <iostream>
#include <math.h>

int main() {
	int a,b,c;
	std::cout << "Inputkan Nilai yang ingin dipangkatkan : ";
	std::cin >> a;
	std::cout << "Inputkan Nilai pangkat : ";
	std::cin >> b;
	c = pow(a,b);
	std::cout << "Hasil perpangkatan : " << c << "\n";

	return 0;
}
