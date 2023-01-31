#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
void zad6() {
 vector<int> v;
 // uważaj, może wypaść 0 nieznaną ilość razy 
 unsigned uj = 0;
 unsigned dod = 0; 
 unsigned parz = 0;
 for (int i = 10; i--;) {
 v.push_back(rand() % 21 - 10); // [-10:10]
 if (v.back() < 0) uj++;
 if (v.back() > 0) dod++;
 if (v.back() % 2 == 0) parz++;
 }
 cout << "Uj=" << uj << " Dod=" << dod << " Parz=" << parz 
 << " Nieparz=" << 10 - parz << endl;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 zad6();
}