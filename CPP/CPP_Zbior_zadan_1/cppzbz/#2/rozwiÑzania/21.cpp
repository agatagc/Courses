#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void kwadrat_malpa(char znak, char malpa, int n) {
 // losuję pozycję znaku małpy [2;n-1][2;n-1] 
 int x = rand() % (n - 2) + 2;
 int y = rand() % (n - 2) + 2;
 for (int w = 1; w <= n; w++) { // wiersze
 if (w == x) {
 for (int k = 1; k <= n; k++) // kolumny
 if (k == y) cout << malpa;
 else cout << znak;
 cout << endl;
 }
 else cout << string(n, znak) << endl; // cały wiersz
 }
}
void kwadrat_pusty_malpa(char znak, char malpa, int n) {
 int x = rand() % (n - 2) + 2;
 int y = rand() % (n - 2) + 2;
 for (int w = 1; w <= n; w++) { // wiersze
 for (int k = 1; k <= n; k++) { // kolumny
 if (k == 1 or k == n or w == 1 or w == n) cout << znak;
 else if (w == x and k == y) cout << malpa;
 else cout << ' ';
 }
 cout << endl;
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 kwadrat_malpa('#', '@', rand() % 8 + 5);
 cout << endl;
 kwadrat_pusty_malpa('#', '@', rand() % 8 + 5);
}