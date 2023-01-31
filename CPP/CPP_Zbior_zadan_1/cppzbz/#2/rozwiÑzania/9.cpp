#include <iostream> 
#include <ctime> 
#include <vector> 
#include <cmath> 
#include <iomanip> 
using namespace std;
////////////////////////////////////////////////////// 
double double_simple_Generator() { // wersja nieuniwersalna [-1.000:1.000]
 return (rand() % 2001 - 1000) / 1000.0;
}
// double_Generator, wersja uniwersalna. Pozwala wygenerować 
// liczbę z zakresu [a;b] o podanej precyzji liczb po przecinku, 
// funkcja pow() z biblioteki <cmath> : pow(a,b) = a do potęgi b 
double double_Generator(int start, int koniec, int poprzecinku = 3) {
 long long d = pow(10, poprzecinku);
 long long x = rand() % (koniec * d - start * d + 1) + start * d;
 return x / (d * 1.0);
}
vector<double> zad9() {
 vector<double> v;
 double suma = 0.0;
 for (int i = 20; i--;) {
 v.push_back(double_simple_Generator()); // 20 losowych
 suma += v.back();
 }
 cout << "Średnia = " << suma / 20.0 << "\n\n";
 return v; // zwróć wylosowany wektor 
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 for (auto e : zad9()) cout << e << " ";
 cout << "\n\n";
 // dodatkowa prezentacja funkcji double_Generator() 
 // liczba [50:1000] z 1 miejscem po przecinku 
 cout << fixed << setprecision(1) << double_Generator(50, 1000, 1) << "\n";
 // liczba [-10:10] z 5 miejscami po przecinku 
 cout << fixed << setprecision(5) << double_Generator(-10, 10, 5) << "\n";
}