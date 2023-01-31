#include <iostream> 
#include <ctime> 
#include <vector> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
vector<int> dni{ 31,28,31,30,31,30,31,31,30,31,30,31 };
vector<int> dnip{ 31,29,31,30,31,30,31,31,30,31,30,31 };
vector<string> mies{ "styczeń","luty","marzec","kwiecień","maj","czerwiec",
"lipiec","sierpień","wrzesień","październik","listopad","grudzień" };
vector<string> dzien{ "poniedziałek","wtorek","środa","czwartek","piątek",↪
"sobota","niedziela" };
int STARTOWY = 5; // indeks soboty w vector<string> dzien;
// zasada - kiedy rok jest przestępny? 
// gdy rok jest podzielny przez 4, ale nie przez 100, lub gdy jest podzielny przez 400 
bool przestepny(UL rok) {
 return ((rok % 4 == 0 and rok % 100 != 0) or (rok % 400 == 0));
}
// ile dni w roku? 
int ile_dni_ma_rok(UL rok) {
 if (przestepny(rok)) return 366;
 return 365;
}
// tylko rok 2022 
string dzien_roku_2022(int N) {
 if (N < 1 or N>365) return "funkcja działa w zakresie N<1;365>";
 string d = "";
 int m = 0; // początkowy miesiąc to styczeń mies[m]

 int nrd = (STARTOWY + N - 1) % 7; // co to za dzień dzien[nrd]?
 for (auto ile : dni) {
 if (N <= ile) {
 d += to_string(N) + " " + mies[m] + " 2022 " + "(" + dzien[nrd] + ")";
 break;
 }
 else {
 N -= ile;
 m++;
 }
 }
 return d;
}
// dowolny rok 
string dzien_roku(UL rok, int N) {
 if (rok < 2022) return "funkcja działa tylko od roku 2022 włącznie";
 vector<int> pom;
 pom = (przestepny(rok)) ? dnip : dni;
 if (N < 1) return "funkcja działa w zakresie N<1;365/366>";
 if (przestepny(rok) and N > 366)
 return "rok " + to_string(rok) +
 ", funkcja działa w zakresie N<1;366>";
 if (!przestepny(rok) and N > 365)
 return "rok " + to_string(rok) +
 ", funkcja działa w zakresie N<1;365>";
 string d = "";
 // dla roku 2022 wykorzystam funkcję dzien_roku_2022 
 if (rok == 2022) return dzien_roku_2022(N);
 // dla dalszych lat > 2022 obliczę, ile dni minęło od 2022-01-01 do końca
 // roku poprzedzającego rok przekazany do funkcji
 UL ile_dni = 0;
 for (UL r = rok - 1; r >= 2022; r--) {
 ile_dni += ile_dni_ma_rok(r);
 }
 // dzień zwracany przez funkcję
 int nrd = (STARTOWY + ile_dni + N - 1) % 7;
 auto dn = (przestepny(rok)) ? dnip : dni;
 int m = 0;
 for (auto ile : dn) {
 if (N <= ile) {
 d += to_string(N) + " " + mies[m] + " " + to_string(rok) + " " + "↪
 (" + dzien[nrd] + ")";
 break;
 }
 else {
 N -= ile;
 m++;
 }
 }
 return d;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << dzien_roku_2022(1) << endl;
 cout << dzien_roku_2022(3) << endl;

 cout << dzien_roku_2022(11) << endl;
 cout << dzien_roku_2022(54) << endl;
 cout << dzien_roku_2022(250) << endl;
 cout << dzien_roku_2022(365) << endl;
 cout << dzien_roku_2022(366) << endl;
 cout << "\n\n\n";
 cout << dzien_roku(2022, 1) << endl;
 cout << dzien_roku(2022, 365) << endl;
 cout << dzien_roku(2023, 1) << endl;
 cout << dzien_roku(2023, 365) << endl;
 cout << dzien_roku(2024, 1) << endl;
 cout << dzien_roku(2024, 31) << endl;
 cout << dzien_roku(2024, 366) << endl;
}