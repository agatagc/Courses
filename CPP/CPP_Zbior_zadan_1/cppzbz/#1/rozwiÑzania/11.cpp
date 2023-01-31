#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 for (int i = 100; i >= 10; i--) {
 if (i % 7 != 0) cout << i << " ";
 }
}