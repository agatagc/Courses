#include <iostream> 
using namespace std;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 float a = 5, b = 4, c = 3; // trójkąt egipski o bokach 3, 4, 5 działa :) 
// sugestia: sprawdź wyniki dla boków: a=10, b=10, c=sqrt(200) oraz dla a=4, b=3, c=2. 
// Pierwszy przypadek tworzy trójkąt prostokątny, drugi nie
 bool sukces = false;
 // przetestuję trzy możliwe przypadki boków 
 if (a * a + b * b == c * c) sukces = true;
 else if (a * a + c * c == b * b) sukces = true;
 else if (b * b + c * c == a * a) sukces = true;
 if (sukces) cout << "No i mamy możliwość zbudowania trójkąta prostokątnego.\n";
 else cout << "Nie da rady zbudować trójkąta prostokątnego.\n";
}