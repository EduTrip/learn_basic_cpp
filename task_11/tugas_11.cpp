#include <iostream>

int luas_segitiga(int alas, int tinggi) {
  return alas * tinggi / 2;
}

int main() {
  int alas, tinggi;
  std::cout << "inputkan alas segitiga : ";
  std::cin >> alas ;
  std::cout << "inputkan tinggi segitiga : ";
  std::cin >> tinggi ;
  std::cout << "Luas segitiga Adalah : " << luas_segitiga(alas, tinggi) << "\n";

  return 0;
}

//
// Inputkan alas segitita : 10

// Inputkan tinggi segitiga : 20

// Luas Segitiga Adalah : 100