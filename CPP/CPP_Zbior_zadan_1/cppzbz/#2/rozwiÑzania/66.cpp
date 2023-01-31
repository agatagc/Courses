#include <iostream> 
#include <ctime> 
#include <vector> 
#include <cmath> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
vector<vector<L>> mnozenie_macierzy(L a, vector<vector<L>> m) {
 vector<vector<L>> wynik;
 wynik.resize(m.size());
 for (int wiersz = 0; wiersz < m.size(); wiersz++) {
 for (L x : m[wiersz]) {
 wynik[wiersz].push_back(a * x);
 }
 }
 return wynik;
}
vector<vector<L>> mnozenie_macierzy(vector<vector<L>>m1, vector<vector<L>> m2) {
 if (m1[0].size() != m2.size()) {
 cout << "Mnożenie nie może się udać.\n" <<
 "Liczba kolumn w macierzy A musi być\n" <<
 "równa liczbie wierszy w macierzy B.\n";
 return { {} };
 }
 vector<vector<L>> wynik;
 wynik.resize(m1.size());
 for (int wiersz = 0; wiersz < m1.size(); wiersz++) {
 int kolumn_m2 = m2[0].size();
 for (int k = 0; k < kolumn_m2; k++) {
 L suma = 0;
 int poz = 0;
 for (poz = 0; poz < m1[wiersz].size(); poz++) {
 suma += m1[wiersz][poz] * m2[poz][k];
 }
 wynik[wiersz].push_back(suma);
 }
 }
 return wynik;
}
void pokaz_macierz(vector<vector<L>>& m) {
 for (auto w : m) {
 for (auto e : w) {
 cout << e << " ";
 }
 cout << endl;
 }
 cout << "\n----------------------------\n";
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));

 // rozwiązanie 
 vector<vector<L>> m1 = { {2,4,9,4},{3,0,2,2},{7,3,1,8},{1,2,3,4},{9,6,3,1} };
 vector<vector<L>> w = mnozenie_macierzy(7, m1);
 pokaz_macierz(w);
 // rozwiązanie 
 vector<vector<L>> m2 = { {5,9,-1},{7,4,0},{-3, 5, 2} };
 vector<vector<L>> m3 = { {4,8,2},{11,-2, 0},{3, 5, 3} };
 w = mnozenie_macierzy(m2, m3);
 pokaz_macierz(w);
 // test dla różnych rozmiarów 
 vector<vector<L>> m4 = { {5,9,-1},{7,4,0},{-3, 5, 2} };
 vector<vector<L>> m5 = { {4},{0},{3},{5} };
 w = mnozenie_macierzy(m4, m5);
 pokaz_macierz(w);
 // test dla różnych rozmiarów 
 vector<vector<L>> m6 = { {5,9,-1},{7,4,0},{-3, 5, 2} };
 vector<vector<L>> m7 = { {4},{0},{3} };
 w = mnozenie_macierzy(m6, m7);
 pokaz_macierz(w);
 // test dla różnych rozmiarów 
 vector<vector<L>> m8 = { {-3, 5, 2} };
 vector<vector<L>> m9 = { {4,2,2,2,2,3,1,2,1},{0,2,3,4,6,6,4,2,1},{3,0,0,0,0,-1,↪
 -1,-1,-1} };
 w = mnozenie_macierzy(m8, m9);
 pokaz_macierz(w);
}