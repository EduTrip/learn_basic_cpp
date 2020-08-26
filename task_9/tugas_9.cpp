#include <iostream>

int main() 
{
	int x, z = 0; 
	std::cout << "Inputkan nilai x : ";
	std::cin >> x;

	for(int i = 1; i <= x; i++) {
		std::cout << z << "\n";
		z = z + 5;
	}

	return 0;
}

