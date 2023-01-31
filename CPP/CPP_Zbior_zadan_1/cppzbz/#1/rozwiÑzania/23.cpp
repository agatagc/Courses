#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<int> v;
 int pomoc;
 while (v.size() < 10) {
 cout << ": ";
 cin >> pomoc;
 bool istnieje = false;
 for (auto e : v)
 if (pomoc == e) {
 istnieje = true;
 break;
 }
 if (!istnieje) v.push_back(pomoc);
 cout << "liczba elementów w wektorze: " << v.size() << "\n";
 }
 cout << "ilość=" << v.size() << endl;
 for (auto e : v) cout << e << " "; // podgląd wektora
}