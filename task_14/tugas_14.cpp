#include <iostream>

struct rumah {
  std::string tipe_rumah;
  int jumlah_kamar;
} rumah1;

int main() {

  rumah1.tipe_rumah = "tes";
  rumah1.jumlah_kamar = 1;

  std::cout << &rumah1.tipe_rumah << std::endl;
  std::cout << &rumah1.jumlah_kamar << std::endl;

  return 0;
}


// Tipe Rumah : A4012E

// Jumlah Kamar : 9E3D01