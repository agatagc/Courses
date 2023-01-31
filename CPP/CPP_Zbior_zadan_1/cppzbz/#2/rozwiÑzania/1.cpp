#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
string zad1(string imie) {
 string samogloski = "eyuioaEYUIOA";
 int ilerazy = 0;
 for (auto literka : imie) {
 if (samogloski.find(literka) != string::npos) ilerazy++;
 }
 string wynik("");
 while (ilerazy--) wynik += imie + " ";
 return wynik;
}
int main() {
 setlocale(LC_ALL, "");
 vector<string> imiona={ "Toudi", "Barnaba", "Pantofelek", "Max"}; // test dla kilku imion
 while (imiona.size()) {
 cout << imiona.back() << ":" << endl;
 cout << zad1(imiona.back()) << endl;
 imiona.pop_back();
 }
}