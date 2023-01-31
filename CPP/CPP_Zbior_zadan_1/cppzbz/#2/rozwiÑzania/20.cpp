#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void trojkat(char znak, int n) {
 for (int w = 1; w <= n; w++) {
 cout << string(n - w, ' ');
 cout << string(2 * w - 1, znak) << endl;
 }
}
void diament(char znak, int n) {
 trojkat(znak, n);
 for (int w = n - 1; w >= 1; w--) {
 cout << string(n - w, ' ');
 cout << string(2 * w - 1, znak) << endl;
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 int r;
 do { r = rand() % 15 + 7; } while (r % 2 == 0); // aż do uzyskania nieparzystej
 trojkat('#', r);
 diament('#', r);
}