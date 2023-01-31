#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
UL odwracanie_cyfr(UL n) {
 vector<UL> cyfry;
 while (n != 0) {
 cyfry.push_back(n % 10);
 n /= 10;
 }
 UL r = 0, poz = 1;
 for (int i = 0; i < cyfry.size(); i++) {
 r += cyfry[i] * pow(10, cyfry.size() - 1 - i);
 }
 return r;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << odwracanie_cyfr(37645) << endl;
 cout << odwracanie_cyfr(1233219) << endl;
 cout << odwracanie_cyfr(333) << endl;
 cout << odwracanie_cyfr(23400) << endl;
 cout << odwracanie_cyfr(3410) << endl;
}