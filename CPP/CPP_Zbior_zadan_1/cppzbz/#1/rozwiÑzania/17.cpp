#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 // 6, 2, 8, 3, 10, 4, 12, 5, 14, 6, ... 
 // Kolejne wyrazy ciągu to 16 i 7. Mamy tu jakby dwa ciągi przemieszane. Jeden to parzyste liczby 
 // zaczynające się od 6, a drugi to kolejne liczby zaczynające się od 2. Oba ciągi przeplatają się... 
 int a = 6, b = 2;
 for (int i = 1; i <= 100; i++) {
 if (i % 2 == 1) { // ciąg a
 cout << a << ", ";
 a += 2;
 }
 else { // ciąg b
 cout << b++ << ", ";
 }
 }
}
/* 
6, 2, 8, 3, 10, 4, 12, 5, 14, 6, 16, 7, 18, 8, 20, 9, 22, 10, 24, 11, 26, 12, 28, 13, 30, 14, 32, 15, 34, 16, 36, 17, 
38, 18, 40, 19, 42, 20, 44, 21, 46, 22, 48, 23, 50, 24, 52, 25, 54, 26, 56, 27, 58, 28, 60, 29, 62, 30, 64, 31, 
66, 32, 68, 33, 70, 34, 72, 35, 74, 36, 76, 37, 78, 38, 80, 39, 82, 40, 84, 41, 86, 42, 88, 43, 90, 44, 92, 45, 
94, 46, 96, 47, 98, 48, 100, 49, 102, 50, 104, 51 
*/ 