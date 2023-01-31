#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 // 1. sposób 
 for (int i = 1; i <= 100; i++) cout << i << " "; // zmienna i żyje tylko w pętli for, 
 // nie istnieje poza nią
 cout << endl;
 // 2. sposób 
 for (int i = 100; i--;) cout << 100 - i << " ";
 cout << endl;
 // 3. sposób 
 for (int i = 0; 100 - i++; ) cout << i << " ";
 cout << endl;
 // 4. sposób 
 int i = 1; // teraz zmienna i żyje w programie (poza pętlami)
 while (i <= 100) cout << i++ << " ";
 cout << endl;
 // 5. sposób 
 i = 1;
 do {
 cout << i++ << " ";
 } while (i<=100);
 cout << endl;
}