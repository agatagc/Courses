Przykładowe rozwiązanie 1. 
#include <iostream> 
#include <ctime> 
#include <vector> 
#include <cmath> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
// wersja zakładająca poprawność napisu 
L stol_(string x) {
 L xi = 0;
 L mnoznik = 1;
 bool minus = false;
 if (x[0] == '-') {
 minus = true;
 x = x.substr(1); // nowy napis bez pierwszego znaku '-'
 }
 while (x.size()) {
 // znaki '0', '1' itd. mają wartość liczbową 48, 49 itd. Wykorzystam to. 
 xi += (x.back() - 48) * mnoznik; // * 1, * 10, * 100...
 mnoznik *= 10;
 x.pop_back();
 }
 return (minus) ? -xi : xi;
}
// wersja z poprawnym napisem, ale inny sposób 
L stol2_(string x) {
 L xi = 0;
 vector<L> liczby{ 0,1,2,3,4,5,6,7,8,9 };
 string znaki = "0123456789";
 L mnoznik = 1;
 bool minus = false;
 if (x[0] == '-') {
 minus = true;
 x = x.substr(1);
 }
 while (x.size()) {
 L liczba = liczby[znaki.find(x.back())]; // działa tylko dla poprawnego napisu!
 xi += liczba * mnoznik;
 mnoznik *= 10;
 x.pop_back();
 }
 return (minus) ? -xi : xi;
}
// wersja z testem, czy zmiana jest możliwa; 
// wykonam tylko funkcję sprawdzającą, czy da się zamienić (można jej użyć
// w funkcjach wyżej utworzonych) 
bool czyLiczba(string x) {
 if (x[0] == '-') x = x.substr(1); // minus może być na początku, ale nie jest potrzebny 
 // do analizy 
 if (x.find_first_not_of("0123456789") == string::npos) return true;
 return false;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << stol_("3120") << endl;
 cout << stol2_("3120") << endl;
 cout << stol_("-215") << endl;
 cout << stol2_("-215") << endl;
 cout << czyLiczba("123") << endl; // tak
 cout << czyLiczba("12-3") << endl; // nie (to nie działania, tylko konwersja) 
 cout << czyLiczba("-123") << endl; // tak
 cout << czyLiczba("123x123") << endl; // nie
} 
Przykładowe rozwiązanie 2. 
#include <iostream> 
#include <string> 
using namespace std;
long long stol_(const string& str) {
 long long result = 0;
 bool negative = false;
 if (str[0] == '-')
 negative = true;
 for (int i = negative ? 1 : 0; i < str.size(); ++i) {
 result *= 10;
 result += str[i] - '0';
 }
 return negative ? -result : result;
}
int main() {
 cout << stol_("3120") << endl;
 cout << stol_("3120") << endl;
 cout << stol_("-215") << endl;
 cout << stol_("-215") << endl;
}