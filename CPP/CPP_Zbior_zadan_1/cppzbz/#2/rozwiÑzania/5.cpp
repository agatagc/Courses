#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
void zad5() {
 unsigned ile = 0;
 while (true) {
 int x = rand() % 101;
 cout << x << " ";
 if (x != 100) ile++;
 else break;
 }
 cout << "\nIle = " << ile << " nie licząc 100." << endl;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 zad5();
}