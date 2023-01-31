#include <iostream> 
#include <iomanip> 
using namespace std;
////////////////////////////////////////////////////// 
double zlep(long long int a, long long int b) {
 // wartość bezwzględna to funkcja abs() z biblioteki <cmath>, 
 // ale można zrobić szybką operację: 
 if (b < 0) b = -b; // zamiast abs()
 long long int temp = b;
 double d = 10;
 while (temp / 10) {
 d *= 10;
 temp /= 10;
 }
 return a + b / d;
}
void zad12() {
 int a, b;
 cout << "Podaj a b:";
 cin >> a >> b;
 cout << setprecision(15) << zlep(a, b) << endl;
}
int main() {
 setlocale(LC_ALL, "");
 zad12();
}