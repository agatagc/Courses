#include <iostream> 
#include <ctime> 
#include <vector> 
#include <cmath> 
#include <iomanip> 
using namespace std;
////////////////////////////////////////////////////// 
double double_01_Generator_simple() { // wersja 1., sztywna
 return rand() % 1001 / 1000.0;
}
// wersja 2. z funkcją pow() z biblioteki <cmath> 
// pow(a,b) zwraca a do potęgi b <cmath> 
double double_01_Generator_v1(int poprzecinku = 3) {
 unsigned long long d = pow(10, poprzecinku);
 unsigned long long x = rand() % d;
 cout << x << " / " << d * 1.0 << endl;
 return x / (d * 1.0);
}
// wersja 3., gdy nie znam pow() 
double double_01_Generator_v2(int poprzecinku = 3) {
 unsigned long long d = 1;
 for (int i = 1; i <= poprzecinku; i++) d *= 10;
 unsigned long long x = rand() % d;
 cout << x << " / " << d * 1.0 << endl; 
 return x / (d * 1.0); // pow(a,b) zwraca a do potęgi b <cmath>
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 // wszystkie funkcje zwracają liczbę [0,1] z różną dokładnością po przecinku 
 cout << fixed; // będzie tyle miejsc po przecinku, ile setprecision "powie"
 cout << setprecision(3) << double_01_Generator_simple() << endl << endl; 
 // zawsze 3 miejsca po przecinku
 cout << setprecision(3) << double_01_Generator_v1(3) << endl; 
 // 3 miejsca po przecinku
 cout << setprecision(5) << double_01_Generator_v1(5) << endl; 
 // 5 miejsc po przecinku
 cout << setprecision(2) << double_01_Generator_v2(2) << endl; 
 // 2 miejsca po przecinku
 cout << setprecision(6) << double_01_Generator_v2(6) << endl; 
 // 6 miejsc po przecinku
}