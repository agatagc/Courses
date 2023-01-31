#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 char znak;
 unsigned ile = 0;
 do {
 cout << "Podaj znak:";
 cin >> znak;
 ile++;
 } while (znak != 'x');
 cout << "Pobrano " << ile << " znaków.\n";
}