#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void rysuj(char znak, int n) {
 int temp = n;
 while (n--) {
 cout << string(temp, znak) << endl; // string(ile_razy, znak)
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 rysuj('#', rand() % 8 + 5); // 5-12
 cout << "\n";
 rysuj('$', 5);
}