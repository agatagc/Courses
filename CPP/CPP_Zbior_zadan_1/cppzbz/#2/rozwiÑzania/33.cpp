#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 // rozwiązanie nr 1, operator >> 
 ifstream plik;
 plik.open("33_dane.txt"); // format wiersza 120;500
 int n;
 char znak;
 vector<int> v;
 while (!plik.eof()) {
 if (plik >> n) // liczba do średnika
 v.push_back(n);
 plik >> znak; // ; średnik 
 if (plik >> n) // liczba po średniku
 v.push_back(n);
 }
 plik.close();
 for (auto e : v) cout << e << " ";
 cout << endl << endl;

 // rozwiązanie nr 2, getline, stoi 
 plik.open("33_dane.txt");
 string tn;
 vector<int> v2;
 int i = 1;
 // czytam do napotkania błędu lub końca pliku 
 while (!plik.eof()) {
 if (i % 2 == 1) getline(plik, tn, ';'); // do średnika
 else getline(plik, tn); // czytaj do końca wiersza lub pliku 
 i = (i + 1) % 2; // na zmianę, czy czytam do ';', czy do końca wiersza/pliku 
 // jeśli nie ma cyfr w przeczytanym wierszu, omijam 
 if (tn.find_first_of("0123456789") == string::npos) continue;
 n = stoi(tn); // zamień ze string na int (system dziesiętny)
 v2.push_back(n);
 }
 plik.close();
 for (auto e : v2) cout << e << " ";
}
// uwaga: można np. tak: stoi (napis,nullptr,2); // binarny jako podstawa 
// uwaga: można np. tak: stoi (napis,nullptr,16); // szesnastkowy jako podstawa 
