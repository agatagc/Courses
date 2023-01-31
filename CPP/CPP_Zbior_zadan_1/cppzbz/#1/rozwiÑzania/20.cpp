#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<int> baza = { 1,4,7,6,3,7,23,-14,22,1 };
 cout << baza.size() << endl; // 10 liczb w wektorze
 vector<int> kopia;
 for (auto e : baza) {
 cout << e << " "; // pokazuje zawartość pierwszego wektora (baza)
 if (e % 2 == 0) kopia.insert(kopia.begin(), e);
 else kopia.push_back(e);
 }
 cout << "\n\n\n";
 for (auto e : kopia) cout << e << " "; // pokazuje drugi wektor (kopia)
}