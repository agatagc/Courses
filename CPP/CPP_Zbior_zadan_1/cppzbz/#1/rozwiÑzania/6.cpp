#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 unsigned ilep = 0, ilenp = 0;
 int temp;
 for (int i = 5; i--;) { // jeśli i będzie == 0, warunek stanie się fałszem
 cin >> temp;
 if (temp % 2 == 1) ilenp++;
 else ilep++;
 }
 cout << "Nieparzystych " << ilenp << "\n";
 cout << "Parzystych " << ilep << "\n";
}