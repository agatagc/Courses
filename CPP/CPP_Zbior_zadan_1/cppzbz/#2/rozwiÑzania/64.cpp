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
 string osoby = "ABCDE"; // pozycja osoby to jej numer, np. "A" to 0, "B" to 1 itd. 
 vector<vector<pair<int, int>>> dane; // pair<dzien, pomiar>
 dane.resize(osoby.size()); // każda osoba ma swój wektor z danymi, 
 // "A" ma dane[0], "B" dane[1] itd. 

 ifstream p;
 p.open("64_dane.txt");
 while (!p.eof()) {
 string osoba;
 int pomiar;
 int dzien;
 p >> osoba;
 p >> pomiar;
 p >> dzien;
 if (p.fail()) break;
 auto o = osoby.find(osoba);
 dane[o].push_back(make_pair(dzien, pomiar));
 }
 p.close();
 // prezentacja posegregowanych pomiarów 
 for (int i = 0; i < dane.size(); i++) {
 cout << "Osoba " << osoby[i] << ":\n";
 for (auto wpis : dane[i]) {
 cout << "\t dzien=" << wpis.first << " pomiar=" << wpis.second << "\n";
 }
 }
 // odpowiedzi: 
 // która osoba dokonywała najwięcej pomiarów? 
 int maks_pomiarow = 0;
 int nr_osoby = 0;
 for (int i = 0; i < dane.size(); i++) {
 cout << osoby[i] << " = " << dane[i].size() << endl;
 if (maks_pomiarow < dane[i].size()) {
 maks_pomiarow = dane[i].size();
 nr_osoby = i;
 }
 }
 cout << "Osoba " << osoby[nr_osoby] 
 << " dokonała najwięcej pomiarów. " << maks_pomiarow << "\n";
 // policz sumę oraz średnią wszystkich pomiarów dla każdej z osób
 for (int i = 0; i < dane.size(); i++) {
 cout << "Osoba " << osoby[i] << " ";
 L suma = 0;
 for (auto e : dane[i]) suma += e.second;
 cout << "suma = " << suma << " średnia = " << suma * 1.0 / dane[i].size() ↪
 << endl;
 }
 // zakładając, że pierwszy dzień pomiarów to wtorek, drugi środa itd., 
 // policz sumę pomiarów ze wszystkich wtorków 
 L suma = 0;
 for (int d = 1; d <= 100; d += 7) { // wtorki
 for (int i = 0; i < dane.size(); i++) {
 for (pair<int, int> wpis : dane[i]) {
 if (wpis.first == d) {
 suma += wpis.second;
 break;
 }
 }
 }
 }
 cout << "Suma pomiarów z wtorków to = " << suma << endl;
}
