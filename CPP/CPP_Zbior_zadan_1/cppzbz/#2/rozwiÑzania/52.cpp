#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
vector<double> przeplatanka(vector<double> a, vector<double> b) {
 vector<double> c;
 auto apoz = a.begin();
 auto bpoz = b.begin();
 do {
 if (apoz != a.end()) {
 c.push_back(*apoz);
 apoz++;
 }
 if (bpoz != b.end()) {
 c.push_back(*bpoz);
 bpoz++;
 }
 } while (apoz != a.end() or bpoz != b.end());
 return c;
}
int main() {
 setlocale(LC_ALL, ""); 
 for (auto e : przeplatanka({ 1,2,3,4,5,6,7,8,9,10 }, { 20,30,40,50,60 }))
 cout << e << " ";
}