#include <iostream>
using namespace std;
int main() {
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  cout << "Masukkan elemen matrix pertama: \n";
  
  //Menyimpan Elemen Matriks
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  //Mencetak Matriks
  cout << "\nMasukkan Matrix: " << endl;
   for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
         cout << " " << matriks1[i][j];
         if (j == n - 1)
            cout << endl << endl;
    	}
	}
  cout << "Masukkan elemen matrix kedua: \n";
  
  //Menyimpan Elemen Matriks
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
  //Mencetak Matriks
  cout << "\nMasukkan Matrix: " << endl;
   for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
         cout << " " << matriks2[i][j];
         if (j == n - 1)
            cout << endl << endl;
    	}
	}
  
  //cetak hasil pengurangan Matriks
  cout << "hasil pengurangan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  cout<<"\ndevelop @nadiapansera014__";
  return 0;
}
