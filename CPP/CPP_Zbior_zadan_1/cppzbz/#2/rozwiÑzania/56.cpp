#include <iostream> 
#include <ctime> 
#include <vector> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
string cyfra_na_string(int c) {
 char znak = c + 48; // 0 -> '0'
 string wynik;
 wynik += znak; // '0' -> "0"
 return wynik;
}
string zad56() {
 vector<int> cyfry = { 0,1,2,3,4,5,6,7,8,9 };
 vector<int> wylosowane;
 UL suma = 0;
 do {
 if (wylosowane.size() < 9) {
 // losuję, ale bez pierwszej pozycji czyli od {1, 2, 3, ..., 9}, pomijam 0 
 int wylosowana_pozycja = rand() % (cyfry.size() - 1) + 1;
 // uwaga na parzystą na trzeciej pozycji 
 if (wylosowane.size() == 2 and cyfry[wylosowana_pozycja] % 2 == 0) continue;
 wylosowane.push_back(cyfry[wylosowana_pozycja]);
 suma += wylosowane.back();
 // teraz zapewniam sobie, że w następnym losowaniu nie zostanie wylosowana ta sama cyfra 
 cyfry[wylosowana_pozycja] = cyfry[0];
 cyfry[0] = wylosowane.back();
 }
 else { // ostatnia cyfra nie ma znaczenia, może się powtarzać
 wylosowane.push_back(cyfry[rand() % cyfry.size()]);
 suma += wylosowane.back();
 }
 if (wylosowane.size() == 10 and suma < 30) {
 cout << "Losuję ponownie, za mała suma! (" << suma << ")\n[";
 for (auto e : wylosowane) cout << e << " ";
 cout << "]\n";
 wylosowane.clear(); // od nowa, zła suma
 suma = 0;
 cyfry = { 0,1,2,3,4,5,6,7,8,9 }; // reset
 }
 } while (wylosowane.size() < 10);
 string liczba = "";
 for (auto e : wylosowane)
 liczba += cyfra_na_string(e);
 return liczba;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << "START\n";
 for (int i = 100; i--;) cout << zad56() << endl;
}