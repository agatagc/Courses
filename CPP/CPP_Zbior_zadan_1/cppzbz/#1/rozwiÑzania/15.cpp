#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 // 1, 2, 2, 3, 3, 3, 4, 4, 4, 4, ... 
 // wzór to kolejne liczby od 1, wyświetlane tyle razy, ile wynosi ta liczba. Zatem kolejny element to 
 // pięć piątek... potem sześć szóstek itd. 
 int n = 1, temp = 0;
 int ile = 1;
 while (ile <= 100) {
 // najpierw temp porównany jest z n, potem temp rośnie o jeden 
 if (temp++ < n) {
 cout << n << " ";
 ile++;
 }
 else {
 temp = 0;
 n++;
 }
 }
 /* 
1 2 2 3 3 3 4 4 4 4 5 5 5 5 5 6 6 6 6 6 6 7 7 7 7 7 7 7 8 8 8 8 8 8 8 8 9 9 9 9 9 9 9 9 9 10 10 10 10 10 10 
10 10 10 10 11 11 11 11 11 11 11 11 11 11 11 12 12 12 12 12 12 12 12 12 12 12 12 13 13 13 13 13 
13 13 13 13 13 13 13 13 14 14 14 14 14 14 14 14 14 
 */ 
}