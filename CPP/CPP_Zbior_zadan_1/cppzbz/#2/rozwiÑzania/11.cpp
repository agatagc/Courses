#include <iostream> 
using namespace std;
////////////////////////////////////////////////////// 
bool jestParzysta(unsigned x) {
 return !(x & 1);
}
int main() {
 cout << jestParzysta(10) << endl;
 cout << jestParzysta(13) << endl;
}