#include <iostream> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
void bez0(string& b) { // usuwam zbędne 0 z początku
 while (b[0] == '0') b.erase(0, 1);
}
// obsługuje przekazywanie "dalej" podczas dodawania 
// 0+0 to 0, 1+0 oraz 0+1 to 1, 1+1 to 0 i 1 dalej, 
// 1+1+1 to 1 i 1 dalej 
string dalej(int& i,int dodaj) { 
 i += dodaj;
 if (i == 0) {
 return "0";
 }
 else if (i == 1) {
 i = 0;
 return "1"; 
 }
 else if (i == 2) {
 i = 1;
 return "0"; 
 }
 else if (i == 3) {
 i = 1;
 return "1";
 }
 else {
 cout << "Jakiś dramat, źle dodajemy?\n";
 return "X";
 }
}
string dodaj(string b1, string b2) {
 // czyszczę początkowe zera 
 bez0(b1); bez0(b2); 
 cout << b1 << endl << "+ " << b2 << endl;
 string suma="";
 int d = 0;
 int s = 0;
 L wlewo = 0;
 L poz1 = b1.size() - 1;
 L poz2 = b2.size() - 1;
 while (poz1 >= 0 and poz2 >= 0) {
 suma = dalej(d, b1[poz1] - 48 + b2[poz2] - 48) + suma;
 if (poz1 >= 0) poz1--;
 if (poz2 >= 0) poz2--;
 }
 while (poz1 >= 0) {
 suma = dalej(d, b1[poz1--]-48) + suma;
 }
 while (poz2 >= 0) {
 suma = dalej(d, b2[poz2--] - 48) + suma;
 }
 while(d) suma = dalej(d,0) + suma;
 return suma;
}
bool czy_negacje(string b1, string b2) { 
 if (b1.size() != b2.size()) return false;
 for (auto& e : b1) {
 if (e == '0') e = '1';
 else e = '0';
 }
 return (b1 == b2);
}
string wieksza(string b1, string b2) {
 bez0(b1); bez0(b2);
 if (b1.size() > b2.size()) return b1;
 if (b2.size() > b1.size()) return b2;
 if (b1 == b2) return b1; // takie same
 for (size_t poz = 0; poz < b1.size(); poz++) {
 if (b1[poz] > b2[poz]) return b1;
 if (b2[poz] > b1[poz]) return b2;
 } 
}

int main() {
 setlocale(LC_ALL, "");
 cout << dodaj("00101010111111", "0001111111") << endl << endl;
 cout << dodaj("111", "1") << endl << endl;
 cout << czy_negacje("10101", "01010") << "\n\n";
 cout << czy_negacje("111000", "000111") << "\n\n";
 cout << czy_negacje("111000", "111111") << "\n\n";
 cout << wieksza("111", "1000") << endl;
 cout << wieksza("111", "111") << endl;
 cout << wieksza("10111", "10011") << endl;
} 