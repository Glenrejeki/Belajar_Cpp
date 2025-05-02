#include <iostream> 


int main (){
  bool glenCapek = true ;
  bool johnBosan = false ;

  bool bawa_payung = false ;
  bool hujan = true ;
  bool keluar_asrama = bawa_payung && hujan;



  std :: cout << "Glen capek: " << glenCapek << std :: endl;
  std :: cout << "John bosan: "<< johnBosan << std :: endl;
  std :: cout << "Keluar asrama : " << keluar_asrama << std :: endl;
}