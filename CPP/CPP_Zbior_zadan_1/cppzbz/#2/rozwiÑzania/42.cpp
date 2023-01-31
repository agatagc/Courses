#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
vector<string> szukajLiczb(string T) {
 vector<string> wynik;
 string cyfry = "0123456789";
 bool nowy_fragment = false;
 for (char znak : T) {
 bool cyfra = (cyfry.find(znak) != string::npos) ? true : false;
 if (nowy_fragment and cyfra) wynik.back() += znak; // istnieje podciąg cyfr
 else if (cyfra and !nowy_fragment) { // nowy podciąg cyfr
 wynik.push_back("");
 wynik.back() += znak;
 nowy_fragment = true;
 }
 else { // nie cyfra
 nowy_fragment = false;
 }
 }
 return wynik;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 string txt = "abd65asd7891das1d";
 for (auto e : szukajLiczb(txt)) {
 cout << e << endl;
 }
}