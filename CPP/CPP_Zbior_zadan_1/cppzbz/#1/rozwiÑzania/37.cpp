#include <iostream> 
using namespace std;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 float a, b;
 a = 10.2;
 b = 11.7;
 cout << "Powinniśmy otrzymać " << a * b << ", jednak bez korzystania ze znaku *\n";
 cout << "Bez * = " << a / (1. / b) << endl;
 float A = 10.25;
 int B = 12;
 cout << "Powinniśmy otrzymać " << A * B << ", jednak bez korzystania ze znaku * i / \n";
 float suma = 0.; // 0. to to samo co 0.0
 while (B > 0) {
 suma += A;
 B -= 1;
 }
 cout << "Bez * / = " << suma << endl;
}