#include <iostream> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
void podwajamPoKropce(double& x) { // referencja zmieni x, bez zwracania x
 L calk = x;
 x = calk + (x - calk) * 2;
}
int main() {
 setlocale(LC_ALL, ""); 
 double x = 1.34;
 podwajamPoKropce(x);
 cout << x << endl;
 x = -1.99;
 podwajamPoKropce(x);
 cout << x << endl;
}