#include <iostream>

using namespace std;

int main() {
  int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan baris matriks: ";
  cin >> m;
  
  cout << "Masukkan kolom matriks: ";
  cin >> n;
  
  cout << "Masukkan elemen matrix 1: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matrix 2: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cin >> matriks2[i][j];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
  
  return 0;
}
