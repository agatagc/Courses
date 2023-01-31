#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void rysuj(char znak, int wiersze, int kolumny) {
 while (wiersze--) {
 for (int i = 1; i <= kolumny; i++)
 cout << znak;
 cout << endl;
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 char znak;
 int a, b;
 cout << "Znak: ";
 cin >> znak;
 a = rand() % 6 + 5;
 b = rand() % 6 + 5;
 rysuj(znak, a, b);
}