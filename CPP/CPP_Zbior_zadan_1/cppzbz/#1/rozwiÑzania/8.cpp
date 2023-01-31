#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 float a, b;
 char znak;
 cout << "Podaj dwie liczby: ";
 cin >> a >> b;
 cout << "Podaj znak: ";
 cin >> znak;
 if (znak == '+') {
 cout << a << znak << b << "=" << a + b << endl;
 }
 else if (znak == '-') {
 cout << a << znak << b << "=" << a - b << endl;
 if (a - b != b - a)
 cout << b << znak << a << "=" << b - a << endl;
 }
 else if (znak == '*') {
 cout << a << znak << b << "=" << a * b << endl;
 }
 else if (znak == '/') {
	 if (a != 0.0) {
	 cout << b << znak << a << "=" << b / a << endl;
	 }
	 if (b != 0.0 and a!=b) {
	 cout << a << znak << b << "=" << a / b << endl;
	 }
 }
 else {
 cout << "Coś nie tak, znak nierozpoznany.\n";
 }
}