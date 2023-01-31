//Przykładowe rozwiązanie 1.
#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 unsigned a, b, c; // czyli unsigned int
 unsigned suma = 0, maks;
 cout << "Podaj kolejne 3 liczby całkowite nieujemne:";
 cin >> a >> b >> c;
 if (a > b) {
 maks = a;
 suma += b;
 }
 else {
 maks = b;
 suma += a;
 }
 if (maks > c) {
 suma += c;
 }
 else {
 suma += maks;
 maks = c;
 }
 for (unsigned i = 1; i <= maks; i++) {
 cout << suma << " ";
 }
}
//Przykładowe rozwiązanie 2.
#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 unsigned a, b, c; // to samo co unsigned int
 cout << "Podaj kolejne 3 liczby całkowite nieujemne:";
 cin >> a >> b >> c;
 unsigned suma = a + b + c;
 unsigned maks = (a > b) ? a : b;
 suma -= maks = (maks > c) ? maks : c;
 while (maks--) {
 cout << suma << " ";
 }
}