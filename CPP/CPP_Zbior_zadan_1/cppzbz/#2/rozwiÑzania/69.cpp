#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
vector<int> oddo(int zakres_od, int zakres_do) {
 vector<int> w;
 int krok = 1;
 if (zakres_od > zakres_do) krok = -1;
 for (int i = zakres_od; i != zakres_do; i += krok)
 w.push_back(i);
 w.push_back(zakres_do);
 return w;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 // prezentacja funkcji oddo 
 for (auto e : oddo(-5, 5)) cout << e << " ";

 cout << endl;
 for (auto e : oddo(3, 12)) cout << e << " ";
 cout << endl;
 for (auto e : oddo(-3, -12)) cout << e << " ";
 cout << endl;
 // cd. zadania
 vector<vector<int>> dziesiec;
 cout << "\n-------------------\n";
 for (int i = 1; i <= 10; i++) {
 int rand_od = rand() % 21 - 10;
 int rand_do = rand() % 21 - 10;
 dziesiec.push_back(oddo(rand_od, rand_do));
 cout << "Z" << i << ": ";
 for (auto e : dziesiec.back()) cout << e << " ";
 cout << endl;
 }
 // zliczanie, ile razy wystąpiła jaka liczba 
 vector<int> zlicz;
 zlicz.resize(21, 0); // pozycje [0...20] traktowane jako [-10, ..., 0, ..., 10]
 for (auto e : dziesiec) {
 for (auto liczba : e) {
 zlicz[liczba + 10]++;
 }
 }
 for (int i = 0; i <= zlicz.size() - 1; i++) {
 if (zlicz[i] >= 5) cout << i - 10 << " wystąpiło w " << zlicz[i] << ↪
 " zbiorach.\n";
 }
}