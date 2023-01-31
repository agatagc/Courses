#include <iostream> 
#include <ctime> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
bool podzielna(L N, L p) {
 while (N >= p) N -= p;
 if (N == 0) return true;
 return false;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << podzielna(100, 10) << endl; // tak
 cout << podzielna(100, 12) << endl; // nie
 cout << podzielna(153, 51) << endl; // tak
 cout << podzielna(1, 10) << endl; // nie
 cout << podzielna(10, 1) << endl; // tak
 cout << podzielna(7, 7) << endl; // tak
}