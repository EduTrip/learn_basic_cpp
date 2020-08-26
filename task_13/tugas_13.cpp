#include <iostream>
#include <string>


struct rumah {
  std::string tipe_rumah;
  int jumlah_kamar;
  float luas_rumah;
  float tinggi_rumah;
  std::string pemilik_rumah;
} rumah1, rumah2;

int main()  {
  std::cout << "Inputkan Tipe Rumah : ";
  std::cin >> rumah1.tipe_rumah;
  std::cout << "Inputkan Jumlah Kamar : ";
  std::cin >> rumah1.jumlah_kamar; 
  std::cout << "Inputkan Luas Rumah : ";
  std::cin >> rumah1.luas_rumah;
  std::cout << "Inputkan Tinggi rumah : ";
  std::cin >> rumah1.tinggi_rumah; 
  std::cout << "Inputkan Pemilik rumah : ";
  std::cin >> rumah1.pemilik_rumah; 
  std::cout << "\n";
  std::cout << "Inputkan Tipe Rumah : ";
  std::cin >> rumah2.tipe_rumah;
  std::cout << "Inputkan Jumlah Kamar : ";
  std::cin >> rumah2.jumlah_kamar; 
  std::cout << "Inputkan Luas Rumah : ";
  std::cin >> rumah2.luas_rumah;
  std::cout << "Inputkan Tinggi rumah : ";
  std::cin >> rumah2.tinggi_rumah; 
  std::cout << "Inputkan Pemilik rumah : ";
  std::cin >> rumah2.pemilik_rumah; 

  return 0;
}

// Inputkan Tipe Rumah : 46A

// Inputkan Jumlah Kamar : 2

// Inputkan Luas rumah : 40.7

// Inputkan Tinggi Rumah : 13.5

// Inputkan Pemilik Rumah : Rendi

