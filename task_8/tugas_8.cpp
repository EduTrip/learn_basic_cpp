#include <iostream>

int main() {
	int x;
	std::cout << "Inputkan Nilai X : ";
	std::cin >> x;
	switch(x) {
		case 10000:
			std::cout << "Sepuluh ribu rupiah\n";
			break;
		case 20000:
			std::cout << "Dua puluh ribu rupiah\n";
			break;
		case 30000:
			std::cout << "Tiga puluh ribu rupiah\n";
			break;
		case 40000:
			std::cout << "Empat puluh ribu rupiah\n";
			break;
		case 50000:
			std::cout << "Lima puluh ribu rupiah\n";
			break;
		default:
			std::cout << "Tidak ditemukan\n";
			break;
	}

	return 0;
}
