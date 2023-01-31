#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void kwadrat_pusty(char znak, int n) {
 for (int w = 1; w <= n; w++) {
 for (int k = 1; k <= n; k++)
 if (w == 1 or w == n or k == 1 or k == n) cout << znak;
 else cout << ' ';
 cout << endl;
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 kwadrat_pusty('#', rand() % 8 + 5);
}