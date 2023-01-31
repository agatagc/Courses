#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void szachownica(char znak, int n) {
 for (int w = 1; w <= n; w++) {
 for (int k = 1; k <= n; k++)
 // gdy w oraz k są równocześnie parzyste lub nieparzyste, pokaż znak; jeśli nie, to spacje 
 if ((w & 1 and k & 1) or (!(w & 1) and !(k & 1))) cout << znak;
 else cout << ' ';
 cout << endl;
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 szachownica('#', rand() % 8 + 5);
 cout << "\n";
 szachownica('$', 12);
}