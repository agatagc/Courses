#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
int main() {
 vector<int> x = { 2,7,1,1,4,9,3,2,1,4,1,9,6,1,3,0,1,2,3,6,8,5,6,9,
 3,0,8,1,8,8,7,0,7,8,5,0,2,2,3,7,1,7,2,4,7,7,5,9,0,7,7,9,2,2,2,7,
 0,0,5,4,6,3,9,3,5,1,0,0,9,2,9,2,8,5,0,8,5,7,0,9,6,4,9,7,8,8,6,5,
 4,3,2,5,8,9,4,6,8,7,9,9 };
 int ile_razy_sasiadki = 0;
 int dziesiec = 0;
 for (size_t poz = 0; poz < x.size() - 1; poz++) {
 if (x[poz] == x[poz + 1]) {
 ile_razy_sasiadki++;
 cout << x[poz] << "," << x[poz + 1] << endl;
 }
 if (x[poz] + x[poz + 1] == 10) {
 dziesiec++;
 cout << x[poz] << "," << x[poz + 1] << "=10" << endl;
 }
 }
 cout << "a) " << ile_razy_sasiadki << endl; // 11
 cout << "b) " << dziesiec << endl; // 6
}