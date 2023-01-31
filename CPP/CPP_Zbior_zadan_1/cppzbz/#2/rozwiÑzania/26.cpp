#include <iostream> 
using namespace std;
////////////////////////////////////////////////////// 
double wartb(double x) {
 return (x < 0) ? -x : x;
}
int main() {
 cout << wartb(-5) << " " << wartb(3.14) << endl;
}