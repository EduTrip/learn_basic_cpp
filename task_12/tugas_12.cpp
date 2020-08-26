#include <iostream>

int main() {
  int a[3], b[3];

  for(int i=0;i<3;i++) {
    std::cout << "Array x " << i << " : ";
    std::cin >> a[i];
  }

  for(int i=0;i<3;i++) {
    std::cout << "Array y " << i << " : ";
    std::cin >> b[i];
  }

  for(int i=0;i<3;i++) {
    std::cout << "Array Penjumlahan " << i << " : " << a[i]+b[i] << "\n";
  }
  return 0;
}

// Array x 0 : 1

// Array x 1 : 5

// Array x 2 : 4


// Array y 0 : 3

// Array y 1 : 2

// Array y 2 : 5


// Array Penjumlahan 0 : 4

// Array Penjumlahan 1 : 7

// Array Penjumlahan 2 : 9