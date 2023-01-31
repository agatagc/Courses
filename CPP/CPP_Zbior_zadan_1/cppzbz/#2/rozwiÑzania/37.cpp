#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
// metoda znak po znaku (porównuję pierwszy z ostatnim, drugi z przedostatnim itd.) 
bool palindrom(string txt) {
 for (int i = 0, k = txt.size() - 1; i <= k; i++, k--) {
 if (txt[i] != txt[k]) return false; // jeśli nie są równe, nie może być palindrom
 }
 return true;
}
// metoda wykorzystująca wbudowane funkcje biblioteki standardowej: assign, 
// assign tworzy nowy napis na bazie innego; utworzę nowy 
// na podstawie starego, ale traktowanego "od tyłu" 
// rbegin() początek, ale od tyłu, rend() koniec od początku :) 
// (reverse begin, reverse end) 
bool palindrom2(string txt) {
 string nowy;
 nowy.assign(txt.rbegin(), txt.rend());
 return (nowy == txt); // true lub false
}
int main() {
 setlocale(LC_ALL, "");
 cout << palindrom("krowa") << endl; // nie
 cout << palindrom("kajak") << endl; // tak
 cout << palindrom("x") << endl; // tak
 cout << palindrom2("krowa") << endl; // nie
 cout << palindrom2("kajak") << endl; // tak
 cout << palindrom2("x") << endl; // tak
}