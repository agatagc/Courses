#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 int a;
 cout << "Podaj liczbę całkowitą:";
 cin >> a;
 if (a % 3 != 0 and a % 5 != 0) {
 cout << "niepodzielna ani przez 3, ani przez 5\n";
 }
 else if (a % 3 == 0 and a % 5 != 0) {
 cout << "podzielna przez 3, ale nie przez 5\n";
 }
 else if (a % 3 != 0 and a % 5 == 0) {
 cout << "podzielna przez 5, ale nie przez 3\n";
 }
 else {
 cout << "podzielna przez 3 i przez 5 (równocześnie)\n";
 // czy to oznacza, że podzielna przez 15? :) 
 }
}