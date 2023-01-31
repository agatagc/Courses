#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void troj(char znak, int n) {
 for (int w = 1; w <= n; w++) {
 for (int k = 1; k <= w; k++)
 cout << znak;
 cout << endl;
 }
}
void troj_v2(char znak, int n) {
 for (int w = 1; w <= n; w++) {
 cout << string(n - w, ' ');
 for (int k = 1; k <= w; k++) {
 cout << znak;
 }
 cout << endl;
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 int r = rand() % 8 + 5;
 troj('#', r);
 troj_v2('#', r);
}