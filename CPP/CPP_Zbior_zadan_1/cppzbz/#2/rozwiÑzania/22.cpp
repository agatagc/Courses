#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void trojkat(char znak, int n, int spacje_wiodace = 0) {
 for (int w = 1; w <= n; w++) {
 cout << string(n - w + spacje_wiodace, ' ');
 cout << string(2 * w - 1, znak) << endl;
 }
}
void choinka(char znak, int N) {
 if (N < 3) { cout << "Popraw N.\n"; return; }
 for (int piramida = 1; piramida <= N; piramida++) {
 trojkat(znak, piramida + 2, N - piramida);
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 choinka('#', rand()%8+5);
}