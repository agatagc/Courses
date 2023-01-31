#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
string sgen(int minL, int maxL, string dict) {
 string r ="";
 int dl = rand() % (maxL - minL + 1) + minL; // długość napisu 
 for (int i = 1; i <= dl; i++)
 r += dict[rand() % dict.size()];
 return r;
}
// pokazuje powtarzające się słowa (pierwszy pomysł) 
bool pokaz(vector<string> v) {
 vector<string> powt;
 for (int i = 0; i <= v.size() - 2; i++) {
 bool znaleziony = false;
 for (int test = i + 1; test <= v.size() - 1; test++) {
 if (v[i] == v[test]) {
 if (!znaleziony) powt.push_back(v[i]);
 znaleziony = true;
 }
 }
 }
 if (powt.size()) {
 for (auto e : powt) cout << e << " ";
 return true;
 }
 return false;
}
// inna wersja (pomysł z pewną optymalizacją) 
// polega na porównywaniu tylko tych napisów, które mają tę samą długość, 
// najpierw jednak trzeba wektor rozbić na fragmenty napisów o odpowiednich 
// długościach (nie będę porównywać pięcioznakowych napisów z siedmioznakowymi). 
// Ten pomysł skraca czas wykonania. Mimo tego, że korzysta się w nim z wcześniejszej funkcji 
// pokaz(), to jednak ogranicza się ilość porównań. 
void pokaz2(vector<string>& v) {
 vector<vector<string>> segregacja;
 segregacja.resize(6); // [0]=5dl, [1]=6dl ... [5]=10dl
 for (auto e : v) {
 segregacja[e.size() - 5].push_back(e);
 }
 for (int s = 0; s <= segregacja.size() - 1; s++) { // kolejne wektory
 pokaz(segregacja[s]);
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 // generowanie 
 vector<string> v;
 v.resize(25000);
 for (auto& e : v) e = sgen(5, 10, "qazwsxedcrfvtgby");
 // rozwiązanie 1. 
 auto pocz = time(0);
 pokaz(v);
 auto kon = time(0);
cout << "\nprzybliżony czas w sekundach:" << kon - pocz << endl;
 // rozwiązanie 2. 
 pocz = time(0);
 pokaz2(v);
 kon = time(0);
cout << "\nprzybliżony czas w sekundach:" << kon - pocz << endl;
}