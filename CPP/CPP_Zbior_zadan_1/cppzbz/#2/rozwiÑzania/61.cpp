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
pair<wstring, wstring> alfabetycznie(wstring t1, wstring t2) {
 wstring alfabet = L"aąbcćdeęfghijklłmnńoóprsśtuwxyźż";
 // napisy nie mogą być puste 
 if (t1 == L"" or t2 == L"") {
 cout << "napisy nie mogą być puste!\n";
 return make_pair(t1, t2);
 }
 // test czy napis ma właściwe litery (dozwolone) 
 if (t1.find_first_not_of(alfabet) != wstring::npos) {
 wcout << t1 << L": ";
 cout << "napis zawiera niedozwolone znaki\n";
 return make_pair(t1, t2);
 }
 if (t2.find_first_not_of(alfabet) != wstring::npos) {
 wcout << t2 << L": ";
 cout << "napis zawiera niedozwolone znaki\n";
 return make_pair(t1, t2);
 }
 // testy na kolejność alfabetyczną (size_t to typ zwracany przez .size()) (to taki dodatni int) 
 for (size_t a = 0, b = 0; a < t1.size() and b < t2.size(); ) {
 if (alfabet.find(t1[a]) < alfabet.find(t2[b])) {
 return make_pair(t1, t2);
 }
 else if (alfabet.find(t1[a]) > alfabet.find(t2[b])) {
 return make_pair(t2, t1);
 }
 else {
 a++;
 b++;
 }
 }
 // wszystkie litery się zgadzają, tylko długość pozostaje do sprawdzenia 
 if (t1.size() <= t2.size()) return make_pair(t1, t2); // t1 krótsze, więc wcześniej
 return make_pair(t2, t1); // t2 krótsze
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 // wyłapane błędy 
 alfabetycznie(L"", L"transformator");
 alfabetycznie(L"ko tek", L"pie sek");
 cout << endl;
 auto p = alfabetycznie(L"wibracje", L"wiadro");
 wcout << p.first << " " << p.second << endl;
 p = alfabetycznie(L"narracja", L"aberracja");
 wcout << p.first << " " << p.second << endl;
 p = alfabetycznie(L"dżdżownica", L"dżdżownica");
 wcout << p.first << " " << p.second << endl;
 p = alfabetycznie(L"łośkowo", L"łoś");
 wcout << p.first << " " << p.second << endl;
 p = alfabetycznie(L"pałąk", L"pasek");
 wcout << p.first << " " << p.second << endl;
}
