#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
int zad2(vector<int>& v) {
 int maks = v[0];
 int poz = -1;
 for (int i = 0; i < v.size(); i++) {
 if (v[i] >= maks) {
 maks = v[i];
 poz = i;
 }
 }
 v.erase(v.begin() + poz);
 return maks;
}
int suma(vector<int> v) {
 int suma = 0;
 for (auto e : v) suma += e;
 return suma;
}
int main() {
 setlocale(LC_ALL, ""); 
 srand(time(0)); // bez tego losowanie z wykorzystaniem funkcji rand() zawsze zwróci ten sam 
 // wynik
 vector<int> v;
 for (int i = 3; i--;) {
 v.push_back(rand() % 20 + 1); // [dowolna liczba z zakresu 1-20]
 cout << v.back() << " ";
 }
 cout << endl;
 int maks = zad2(v);
 int s = suma(v);
 while (maks--) cout << s << " ";
}