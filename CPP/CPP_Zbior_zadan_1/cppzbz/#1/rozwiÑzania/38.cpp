#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 vector<int> v = { 1,2,3,2,5,6,9,1,3,7,5,8,0,9,3,1,2,5,7,6,3,4,2,1,0,8,9,7,8,
 4,6,3,2,5,4,7,8,9,1,3,2,5,4,7,5,6,8,0,1,2,3,6,5,8,7,1,1,2,3,4,4,5,5,6,8,
 9,0,9,8,1,9,7,5,4,1,2,7,6,9,3,4,2,6 };
 // Rozwiązanie 1. 
 for (unsigned poz = 0; poz < v.size(); poz++) {
 unsigned suma = 0;
 for (int dl = 0; poz + dl < v.size(); dl++) {
 suma += v[poz + dl];
 if (suma == 10) {
 cout << "PODCIĄG: ";
 for (unsigned i = poz; i <= poz + dl; i++) cout << v[i] << " ";
 cout << "POZYCJE: ";
 for (unsigned i = poz; i <= poz + dl; i++) cout << i << " ";
 cout << endl;
 }
 else if (suma > 10) break;
 }
 }
 cout << "\n\n";
 // Rozwiązanie 2. 
 int N = v.size();
 for (int dlugosc_podciagu = N; dlugosc_podciagu >= 1; dlugosc_podciagu--) {
 for (int start = 0; start + dlugosc_podciagu <= N; start++) {
 unsigned koniec = start + dlugosc_podciagu - 1;
 unsigned suma = 0;
 for (unsigned x = start; x <= koniec; x++) {
 suma += v[x];
 if (suma > 10) break;
 }
 if (suma == 10) {
 cout << "PODCIĄG: ";
 for (unsigned x = start; x <= koniec; x++) cout << v[x] << " ";
 cout << "POZYCJE: ";
 for (unsigned x = start; x <= koniec; x++) cout << x << " ";
 cout << endl;
 }
 }
 }
}