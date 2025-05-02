#include <iostream>
#include <string>

int main (){
  
  int umur = 20;
  std :: cout << umur << std :: endl;
  umur = 19;
  std :: cout << "Umur si Glen Tahun Lalu adalah " << umur << " tahun"<<  std :: endl;


  unsigned int ketinggian_bangunan = 100;
  std :: cout << "Ketinggian bagunan :"<< ketinggian_bangunan << std :: endl;

  unsigned int kedalaman_laut = -200;
  std :: cout << "Kedalaman laut :" << kedalaman_laut << std :: endl; // ini mengubah nilai negatif menjadi positif 

  float pi = 3.14;
  std :: cout << "Nilai pi adalah " << pi << std :: endl ;


  const float gravitasi_normal = 9.8;
  // float gravitasi_normal = 10.0;  ini tidak bisa diubah
  std :: cout << "Gravitasi tempat normal : " << gravitasi_normal << std :: endl;



  double nilai_pi_tinggi = 3.14159265358979323846;
  std :: cout << nilai_pi_tinggi<< std :: endl ;

  char karakter = 'C';
  std :: cout << karakter << std :: endl ;

  std ::string pesan = "Zeff ayok mabar ml"; // harus pakai std untuk pakai string
  std::cout << pesan << std::endl;


  bool logika = false ;
  std :: cout << logika << std :: endl ;

  return 0;

}