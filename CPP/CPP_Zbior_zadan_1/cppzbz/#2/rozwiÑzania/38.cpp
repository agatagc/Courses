#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
UL ileAwB(string A, string B) {
 UL i = 0;
 L poz = -1;

 while ((poz = B.find(A, ++poz)) != string::npos) i++;
 return i;
}
int main() {
 setlocale(LC_ALL, ""); 
 string A = "kro";
 string B = "Makro nie jest krotochwilą, jednak krowom nic do tego.\n"; // 3x kro
 cout << ileAwB(A, B);
}
