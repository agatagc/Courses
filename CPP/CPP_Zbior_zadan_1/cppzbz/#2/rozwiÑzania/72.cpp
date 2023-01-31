#include <iostream> 
#include <ctime> 
#include <string> 
#include <bitset> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
bool bitowy_palindrom(UL b, UL p = 8) {
 bitset<8> lewo8 = 0b10000000;
 bitset<8> prawo8 = 0b00000001;
 bitset<16> lewo16 = 0b1000000000000000;
 bitset<16> prawo16 = 0b0000000000000001;
 bitset<8> b8 = b;

 bitset<16> b16 = b;
 for (int przesuniecie = 1; przesuniecie <= p / 2 - 1; przesuniecie++) {
 if (p == 8) {
 if ((b8 & lewo8) == 0 xor (b8 & prawo8) == 0) return false;
 lewo8 = lewo8 >> 1;
 prawo8 = prawo8 << 1;
 }
 else {
 if ((b16 & lewo16) == 0 xor (b16 & prawo16) == 0) return false;
 lewo16 = lewo16 >> 1;
 prawo16 = prawo16 << 1;
 }
 }
 return true;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << bitowy_palindrom(0b11100111) << endl; // tak
 cout << bitowy_palindrom(0b01100110) << endl; // tak
 cout << bitowy_palindrom(0b10011001) << endl; // tak
 cout << bitowy_palindrom(0b10011111) << endl; // nie
 cout << bitowy_palindrom(0b10111001) << endl; // nie
 cout << bitowy_palindrom(0b01111111) << endl; // nie
 cout << bitowy_palindrom(0b1110011111100111, 16) << endl; // tak
 cout << bitowy_palindrom(0b0110011001100110, 16) << endl; // tak
 cout << bitowy_palindrom(0b1001100110011001, 16) << endl; // tak
 cout << bitowy_palindrom(0b1001111110111111, 16) << endl; // nie
 cout << bitowy_palindrom(0b1011100110011111, 16) << endl; // nie
 cout << bitowy_palindrom(0b0111111110011111, 16) << endl; // nie
}