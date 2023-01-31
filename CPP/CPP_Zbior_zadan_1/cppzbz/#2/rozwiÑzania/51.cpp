#include <iostream> 
#include <ctime> 
#include <vector> 
#include <cmath> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
bool czyPierwsza(UL i) {
 if (i <= 1) return false;
 for (UL dzielnik = 2; dzielnik <= sqrt(i); dzielnik++)
 if (i % dzielnik == 0) return false;
 return true;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << czyPierwsza(10) << " ";
 cout << czyPierwsza(13) << " ";
}