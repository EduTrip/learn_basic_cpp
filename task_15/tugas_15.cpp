#include <iostream>

int multiply(int *x, int *y) {
  return *x * *y;
}

int main() {
  int x, y, *a, *b;
  std::cout << "inputkan x " ;
  std::cin >> x;
  a = &x;
  std::cout << "inputkan y " ;
  std::cin >> y;
  b = &y;
  std::cout << "Hasil : " << multiply(a, b) << std::endl;

  return 0;
}

// Inputkan x : 10

// Inputkan y : 6

// Hasil : 60