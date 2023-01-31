#include <iostream> 
#include <ctime> 
#include <vector> 
#include <cmath> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
string L2string(L x) {
 string napis = "";
 string minus = "";
 if (x < 0) { x *= -1; minus = "-"; }
 while (x != 0) {
 napis = char(x % 10 + 48) + napis;
 x /= 10;
 }
 napis += (napis == "") ? "0" : "";
 return minus + napis;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << L2string(1443) << endl;
 cout << L2string(-1443) << endl;
 cout << L2string(0) << endl;
 cout << L2string(-0) << endl;
 cout << L2string(+0) << endl;
}