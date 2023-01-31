#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
void zad15() {
 vector<int> v;
 int ile = rand() % 91 + 10; // losowa ilość
 while (ile--) v.push_back(rand() % 100 + 1); // generuję wektor
 cout << "Przed: ";
 for (int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
 cout << endl;
 for (auto& e : v) { 
 if (e & 1) e = -e;
 else e = 0;
 }
 cout << "Po: ";
 for (int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
 cout << "\n\n";
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 zad15();
}