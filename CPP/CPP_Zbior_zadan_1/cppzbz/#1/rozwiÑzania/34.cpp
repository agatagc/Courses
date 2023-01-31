#include <iostream> 
using namespace std; 
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 char znak;
 int suma(0);
 do {
 cout << "Podaj znak:";
 cin >> znak;
 cout << "Wpisano znak " << znak;
 if (!(znak >= 65 and znak <= 90)
 and !(znak >= 97 and znak <= 122)
 and !(znak >= 48 and znak <= 57)) {
 cout << "Wprowadzono niedozwolony znak!\n";
 continue;
 }
 suma += znak;
 cout << ", wartość znaku: " << znak - 0;
 cout << ", aktualna suma = " << suma << endl;
 } while (suma <= 350);
}