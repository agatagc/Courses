#include <iostream> 
#include <vector> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
bool jest(vector<int> v, int x) {
 for (auto e : v) if (x == e) return true;
 return false;
}
vector<int> czesc_wspolna_bez_powtorzen(vector<int> A, vector<int> B) {
 vector<int> cw;
 for (auto e : A) {
 for (auto f : B) {
 if (e == f and !jest(cw, e)) {
 cw.push_back(e);
 break;
 }
 }
 }
 return cw;
}
int main() {
 setlocale(LC_ALL, "");
 for (auto e : czesc_wspolna_bez_powtorzen({ 6,1,2,3,4,5,6,6,6,7,7,7 }, ↪
 { 4,5,6,7,7 })) 
 cout << e << " ";
}