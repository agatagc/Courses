#include <iostream> 
#include <ctime> 
#include <vector> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
bool takie_same(vector<L> v, int pocz, int kon) {
 for (int i = pocz; i <= kon - 1; i++)
 if (v[i] != v[i + 1]) return false;
 return true;
}
void zad48(vector<L> v) {
 for (int dlugosc = v.size(); dlugosc >= 2; dlugosc--) { // długości
 for (int i = 0; i + dlugosc - 1 < v.size(); i++) {
 if (takie_same(v, i, i + dlugosc - 1)) {
 for (int s = i; s <= i + dlugosc - 1; s++) cout << v[s] << " ";
 cout << "od pozycji " << i << " do pozycji " << i + dlugosc - 1 << endl;
 }
 }
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 zad48({ 3,2,1,1,4,2,4,4,4 });
 zad48({ 1,1,2,3,2,2,3,3,1,1,5,3,2,6,7,4,3,3,3,3,3,1,6,9 });
} 