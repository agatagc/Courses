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
void zapisz(string txt) {
 ofstream zapis;
 zapis.open("kod.txt");
 for (auto znak : txt) {
 zapis << (znak + 0); // kod znaku
 zapis << ';';
 }
 zapis.close();
}
string odczytaj() {
 ifstream odczyt;
 string odczytane = "", temp;
 odczyt.open("kod.txt");
 while (getline(odczyt, temp, ';').good()) {
 odczytane += char(stoi(temp));
 }
 odczyt.close();
 return odczytane;
}
// uwaga: w przypadku polskich znaków można zauważyć, że znak jest traktowany jak 
// dwa znaki (po zamianie na kod są ujemne). Sprawdź, jak wyżej utworzona funkcja zapisze 'ś' czy 'ć'. 
// można też użyć typu wstring zamiast string, wofstream zamiast ofstream, wchar_t zamiast 
// char, wcin zamiast cin, wcout zamiast cout 
void zapisz(wstring txt) { // przeciążona 
 wofstream zapis;
 zapis.open("kod2.txt");
 for (auto znak : txt) {
 zapis << (znak + 0); // kod znaku 
 zapis << ';';
 }
 zapis.close();
}
wstring odczytaj2() {
 ifstream odczyt;
 wstring odczytane = L""s; // wstring ma literały L"treść"s;
 string temp;
 odczyt.open("kod2.txt");
 while (getline(odczyt, temp, ';').good()) {
 odczytane += wchar_t(stoi(temp));
 }
 odczyt.close();
 return odczytane;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 string txt;
 getline(cin, txt);
 zapisz(txt);
 cout << "Odczyt:" << odczytaj() << endl;
 wstring txt2;
 getline(wcin, txt2);
 zapisz(txt2);
 wcout << "Odczyt:" << odczytaj2() << endl;
}
