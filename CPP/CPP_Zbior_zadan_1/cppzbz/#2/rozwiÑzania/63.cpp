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
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 // dane z pliku włożymy sobie do vector<vector<L>> 
 vector<vector<L>> dane;
 int kolumna = 0;
 ifstream d;
 // odczyt 
 d.open("63_dane.txt");
 while (!d.eof()) {
 L temp;
 d >> temp;
 if (!d.fail()) {
 if (kolumna == 0) dane.push_back({});
 dane.back().push_back(temp);
 }
 kolumna = (kolumna + 1) % 6;
 }
 d.close();
 // prezentacja danych z pliku 
 for (auto e : dane) {
 for (auto f : e) {
 cout << f << " ";
 }
 cout << "\n";
 }
 // jaka jest średnia liczb w pierwszej i ostatniej kolumnie? 
 double srp = 0, sro = 0;
 int np = 0, no = 0;
 for (int i = 0; i < dane.size(); i++) {
 for (int j = 0; j < dane[i].size(); j++) {
 if (j == 0) {
 srp += dane[i][j];
 np++;
 }
 else if (j == dane[i].size() - 1) {
 sro += dane[i][j];
 no++;
 }
 }
 }
 cout << "średnia w pierwszej kolumnie = " << srp / np << endl;
 cout << "średnia w ostatniej kolumnie = " << sro / no << endl;
 // które kolumny (numer) posiadają największą liczbę? 
 L maks = dane[0][0];
 for (int i = 0; i < dane.size(); i++) {
 for (int j = 0; j < dane[i].size(); j++) {
 if (maks < dane[i][j]) maks = dane[i][j]; // znajdź maksa
 }
 }
 vector<int> kolumny;
 for (int i = 0; i < dane.size(); i++) {
 for (int j = 0; j < dane[i].size(); j++) {
 if (maks == dane[i][j]) kolumny.push_back(j + 1);
 }
 }
 cout << "Największa liczba = " << maks << " znajduje się w kolumnach: ";
 for (auto e : kolumny) cout << e << " ";
 cout << endl;
 // ile jest wierszy, w których nie występuje liczba podzielna przez 10? 
 int ile_wierszy = 0;
 for (int i = 0; i < dane.size(); i++) {
 bool nie_wystepuje = true;
 for (int j = 0; j < dane[i].size(); j++) {
 if (dane[i][j] % 10 == 0) {
 nie_wystepuje = false;

 break;
 }
 }
 if (nie_wystepuje) {
 ile_wierszy++;
 cout << "wiersz nr:" << i + 1 << ":brak podz. przez 10 (";
 for (auto e : dane[i]) cout << e << " ";
 cout << ")\n";
 }
 }
 cout << "W " << ile_wierszy << " wierszach nie występuje liczba podzielna przez 10.\n";
 // ile jest wierszy, w których pierwsze trzy liczby zachowują niemalejący porządek? 
 ile_wierszy = 0;
 for (int i = 0; i < dane.size(); i++) {
 if (dane[i][0] <= dane[i][1] and dane[i][1] <= dane[i][2]) {
 cout << "niemalejący porządek: " << dane[i][0] << " " <<
 dane[i][1] << " " << dane[i][2] << endl;
 ile_wierszy++;
 }
 }
 cout << "W " << ile_wierszy << " wierszach 3 pierwsze liczby mają niemalejący ↪
 porządek.\n";
 // ile jest wierszy, w których są dokładnie 3 liczby z zakresu <85;100>? 
 ile_wierszy = 0;
 for (int i = 0; i < dane.size(); i++) {
 int trzy = 0;
 for (int j = 0; j < dane[i].size(); j++) {
 if (dane[i][j] >= 85 and dane[i][j] <= 100) trzy++;
 }
 if (trzy == 3) {
 ile_wierszy++;
 cout << "W wierszu " << i + 1 << " dokładnie 3 liczby są <85;100>\n";
 }
 }
 cout << "W " << ile_wierszy << " wierszach dokładnie 3 liczby są między ↪
 <85;100>\n";
}