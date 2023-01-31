#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 int x;
 cin >> x;
 if (x < 0) x--;
 else if (x > 0) x++;
 cout << x << endl;
 if (x % 2 == 0) cout << "tak";
 else cout << "nie";
}