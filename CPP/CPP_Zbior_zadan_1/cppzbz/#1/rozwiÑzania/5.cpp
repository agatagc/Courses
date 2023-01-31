#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 float a1, a2, a3, a4, a5;
 cin >> a1 >> a2 >> a3 >> a4 >> a5;
 if (a5 == 0.0) {
 cout << "Dzielenie przez 0 to nie najlepszy pomysł.\n";
 return 0; // opuść program
 }
 cout << "Wartość wyrażenia: " << (((a1 + a2) * a3) - a4) / a5 << endl;
 // uwaga: starsze kompilatory mogą mieć problem z rzeczywistym porównaniem a5 == 0.0, 
 // gdyż liczba 0.0 może być przybliżeniem, a faktyczna 
 // wartość może wynosić np. 0.00000000000082790 itp. 
}