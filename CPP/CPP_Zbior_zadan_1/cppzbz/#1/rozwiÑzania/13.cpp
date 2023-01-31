#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 int ile = 0;
 for (int i = 1; i <= 120; i++) {
 if (i % 5 == 0 and i % 11 == 0) continue;
 cout << i << " ";
 ile++;
 }
 cout << "\n\nLiczb wyświetlonych: " << ile << endl;
 cout << "\n\nLiczb pominiętych: " << 120 - ile << endl;
}