#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 // wersja naiwna (więcej kroków, if w pętli) 
 for (int i = 0; i <= 1000; i++) {
 if (i % 6 == 0) cout << i << " ";
 }
 cout << "\n\n\n";
 // wersja sprytniejsza (liczby podzielne przez 6 to po prostu jej wielokrotności) 
 for (int i = 0; i <= 1000; i += 6) {
 cout << i << " ";
 }
}