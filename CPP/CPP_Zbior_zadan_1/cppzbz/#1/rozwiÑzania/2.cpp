#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 int a;
 cout << "Podaj liczbę całkowitą:";
 cin >> a;
 if (a % 2 == 0) cout << "tak\n";
 else cout << "nie\n";
}