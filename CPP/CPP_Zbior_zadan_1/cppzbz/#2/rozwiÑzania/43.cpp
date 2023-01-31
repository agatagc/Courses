#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
// funkcja szuka jednego, najdłuższego (pierwszego) podciągu 
string szukajNajdluzszyNiemalejacy(string T) {
 string cyfry = "0123456789";
 L poczatek = -1, dlugosc = 0;
 L maxdl = -1, maxpocz = -1;
 for (UL i = 0; i <= T.size() - 1; i++) {
 char znak = T[i];
 bool cyfra = (cyfry.find(znak) == string::npos) ? false : true;
 if (cyfra and dlugosc == 0) { // nowy podciąg jednocyfrowy
 poczatek = i;
 dlugosc = 1;
 }
 else if (cyfra and dlugosc > 0) { // trwa podciąg
 if (T[i - 1] - 48 <= T[i] - 48) { // zachowana niemalejąca kolejność

 dlugosc++;
 if (maxdl < dlugosc) {
 maxdl = dlugosc;
 maxpocz = poczatek;
 }
 }
 else {
 poczatek = i;
 dlugosc = 1;
 }
 }
 else { // nie cyfra
 dlugosc = 0;
 poczatek = i;
 }
 }
 return T.substr(maxpocz, maxdl);
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 string txt = "dfgnqeiut98tna1223v0w3r1233334asdsh";
 cout << szukajNajdluzszyNiemalejacy(txt);
}