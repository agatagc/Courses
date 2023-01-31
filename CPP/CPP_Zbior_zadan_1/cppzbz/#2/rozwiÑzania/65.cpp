#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
/* 
 W zadaniu wykorzystamy proponowane wcześniej rozwiązania, takie jak str2dec(). 
*/
// liczba (string) z dowolnego systemu na dziesiętny 
UL str2dec(string s, UL podstawa) {
 // zwróć uwagę, że pozycja cyfry to jej wartość w systemie dziesiętnym, 
 // np. 3 ma pozycję 3, a f pozycję 15 
 string cyfrySystemu = "0123456789abcdef";
 UL dec = 0;
 UL potega = s.size() - 1;
 for (auto cyfra : s) {
 UL vpoz = cyfrySystemu.find(cyfra); 
 dec += vpoz * pow(podstawa, potega--);
 }
 return dec;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 string dane = 
"xfac8*1101011*1110100xc8x32xff*1010o7311o1212xabcd*101*1*0x1o0xd*11111";
 UL podstawa = 0; // 2, 8, 16
 string temp = "";
 for (int poz = 0; poz < dane.size(); poz++) {
 if (dane[poz] == 'x' or dane[poz] == 'o' or dane[poz] == '*') {
 if (temp != "") {
 cout << temp << " (" << podstawa << ")= " << str2dec(temp, podstawa) ↪
 << endl;
 }
 temp = "";
 }
 else {
 temp += dane[poz];
 }
 if (dane[poz] == 'x') {
 podstawa = 16;
 }
 else if (dane[poz] == 'o') {
 podstawa = 8;
 }
 else if (dane[poz] == '*') {
 podstawa = 2;
 }
 }
 if (temp != "") {
 cout << temp << " = " << str2dec(temp, podstawa) << endl;
 }
}