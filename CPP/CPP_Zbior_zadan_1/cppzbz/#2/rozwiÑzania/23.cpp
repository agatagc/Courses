Przykładowe rozwiązanie 1. 
#include <iostream> 
using namespace std;
////////////////////////////////////////////////////// 
double potega(double x, unsigned int e) {
 double wynik = 1;
 for (int i = 1; i <= e; i++) {
 wynik *= x;
 }
 return wynik;
}
double potega(double x, int e) {
 if (e < 0) {
 return 1 / potega(x, (unsigned)-e);
 }
 return potega(x, (unsigned)e);
}
int main() {
 setlocale(LC_ALL, "");
 cout << potega(2, 3) << endl; // 2 do potęgi trzeciej 
 cout << potega(2, 0) << endl; // 2 do 0
 cout << potega(2, -3); // 2 do -3
} 
Przykładowe rozwiązanie 2. 
#include <iostream> 
using namespace std;
////////////////////////////////////////////////////// 
double potega(double x, unsigned int e) {
 return e == 0 ? 1 : x * potega(x, e - 1);
}
double potega(double x, int e) {
 if (e < 0)
 return 1 / potega(x, -e);
 else
 return potega(x, (unsigned int)e);
}
int main() {
 setlocale(LC_ALL, "");
 cout << potega(2, 6) << endl;
 cout << potega(2, 0) << endl;
 cout << potega(2, -6) << " " << 1 / 64.0 << endl;
}