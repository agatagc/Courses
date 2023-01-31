#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
double liniowa(double a, double b, double x) {
 return a * x + b;
}
// lub np. tak 
double liniowa2(vector<double>wsp, double x) {
 return wsp[0] * x + wsp[1];
}
int main() {
 setlocale(LC_ALL, "");
 cout << liniowa(3, -4, 2.5) << endl; // 3x-4 => 3*2.5-4
 cout << liniowa2({ 3,-4 }, 2.5); // przekazano wektor definiowany w locie jako {3,-4}
}