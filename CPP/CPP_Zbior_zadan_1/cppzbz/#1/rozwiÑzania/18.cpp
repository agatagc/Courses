#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 int pobrana;
 do {
 cout << "Podaj liczbę:";
 cin >> pobrana;
 cout << 2 * pobrana << "\n";
 } while (pobrana < 1 or pobrana > 10);
}