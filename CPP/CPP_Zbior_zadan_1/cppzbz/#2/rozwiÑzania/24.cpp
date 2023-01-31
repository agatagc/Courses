#include <iostream> 
using namespace std;
////////////////////////////////////////////////////// 
typedef long long int L;
long long int zaokr(double x) {
 double reszta = x - L(x); // >=.5 
 if (reszta >= 0.5) return L(x) + 1;
 else if (reszta <= -0.5) return L(x) - 1;
 return L(x);
}
int main() {
 setlocale(LC_ALL, "");
 cout << zaokr(231.24123) << endl;
 cout << zaokr(-231.24123) << endl;
 cout << zaokr(231.94123) << endl;
 cout << zaokr(-231.94123) << endl;
}