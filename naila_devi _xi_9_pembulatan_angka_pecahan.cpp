#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
  float pecahan, vround, vceil, vfloor, vtrunc;
  
  //minta masukkan bilangan pecahan
  cout<< "masukkan bilangan pecahan : ";
  cin >> pecahan;
  
  //melakukan pembulatan
  vround = round(pecahan);
  vceil = ceil(pecahan);
  vfloor = floor(pecahan);
  vtrunc = trunc(pecahan);
  
//menampilkan hasil pembulatan
cout << "Hasil Pembulatan Round: " << vround <<endl;
cout << "Hasil Pembulatan ceil: " << vceil <<endl; 	
cout << "Hasil Pembulatan floor: " << vfloor <<endl;
cout << "Hasil Pembulatan Trunc: " << vtrunc <<endl;

  system ("PAUSE");
  return 0;
}
