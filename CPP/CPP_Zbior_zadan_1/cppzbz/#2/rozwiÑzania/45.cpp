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
// korzystam z funkcji utworzonej we wcześniejszych zadaniach 
bool palindrom(string txt);
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 ifstream dane;
 dane.open("45_dane.txt");
 string wiersz;
 vector<string> kolumny;
 kolumny.resize(20, "");
 // wszystkie wiersze to palindromy 
 cout << "Wiersze:\n";
 while (getline(dane >> std::ws, wiersz)) {
 if (palindrom(wiersz)) cout << "(" << wiersz << ")" << endl;
 for (int i = 0; i < wiersz.size(); i++) {
 kolumny[i] += wiersz[i];
 }
 }
 cout << "\nKolumny:\n";
 for (auto kolumna : kolumny) {
 if (palindrom(kolumna)) cout << "(" << kolumna << ")" << endl;
 }
 dane.close();
}
//////////////////////// 
// funkcje wykorzystane z wcześniejszych zadań
bool palindrom(string txt) {
 string nowy;
 nowy.assign(txt.rbegin(), txt.rend());
 return (nowy == txt); // true lub false
}