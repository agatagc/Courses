#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
int szukajMaksa(vector<int>& v) {
 int maks = v[0];
 int ost_p(0);
 for (int poz = 0; poz < v.size(); poz++) {
 if (maks < v[poz]) {
 maks = v[poz];
 ost_p = poz;
 }
 }
 v[ost_p] = -1; // gwarancja, że już tej liczby nie uznam za maksymalną
 return maks;
}
void zad7() {
 vector<int> v;
 for (int i = 20; i--;) { 
 v.push_back(rand() % 1001); // 0-1000
 cout << v.back() << " ";
 }
 cout << v.size() << endl;
 cout << "\n\n";
 for (int trzy = 3; trzy--;) {
 cout << szukajMaksa(v) << endl;
 }
}
int main() {
 setlocale(LC_ALL, ""); 
 srand(time(0));
 zad7();
}