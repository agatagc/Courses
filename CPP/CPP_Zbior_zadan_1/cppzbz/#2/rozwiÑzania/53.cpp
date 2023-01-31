#include <iostream> 
#include <ctime> 
#include <vector> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
bool poprawny(string wyr) {
 cout << "\nBadam= " << wyr << endl;
 string litery = "qazwsxedcrfvtgbyhnujmikolp";
 string operacje = "+-*/^%"; // do tego nawiasy () oraz =
 string cyfry = "0123456789";
 // algorytm oprę na redukcji części poprawnych 
 // do innych poprawnych, ale krótszych, np.: 
 // 1+1 zredukuję do 1, a+b do a, (1) do 1 itd. 
 /* Uwaga! Algorytm wydaje mi się skuteczny. Nie znalazłem jak 
 do tej pory kontrprzykładu, który wykazuje jego złe działanie. */
 //////////////////////////////////////////////////////// 
 // zamieniam każdą cyfrę na 1 
 for (auto& e : wyr) if (cyfry.find(e) != string::npos) e = '1';
 // redukuję wszystkie ciągi cyfr, np. 1111 na 1 
 size_t poz;
 while ((poz = wyr.find("11")) != string::npos)
 wyr.replace(poz, 2, "1");
 // zamieniam litery na "a" 
 for (auto& e : wyr) if (litery.find(e) != string::npos) e = 'a';
 // zamieniam "1" na "a" 
 for (auto& e : wyr) if (e == '1') e = 'a';
 // zmieniam działania na jedno działanie '-' (nie ruszam =) 
 for (auto& e : wyr)
 if (e != '-' and operacje.find(e) != string::npos) e = '-';
 // redukuję do oporu "(a)" oraz "(-a)" do "a" oraz redukuję "a-a" do "a" 
 string temp;
 do {
 temp = wyr;
 while ((poz = wyr.find("(a)")) != string::npos)
 wyr.replace(poz, 3, "a");
 while ((poz = wyr.find("(-a)")) != string::npos)
 wyr.replace(poz, 4, "a");
 while ((poz = wyr.find("a-a")) != string::npos)
 wyr.replace(poz, 3, "a");
 } while (wyr != temp);
 // redukuję a=a do a 
 while ((poz = wyr.find("a=a")) != string::npos)
 wyr.replace(poz, 3, "a");
 // wyr musi być "a" lub "-a", jeżeli jest poprawne 
 cout << "Po redukcji " << wyr << endl;
 return (wyr == "a" or wyr == "-a" or wyr == "");

}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 // 1 (true): poprawny, 0 (false): niepoprawny 
 cout << poprawny("-3*x+781/a=2+(1*a)-3/b%10+(1)-(-a)/100") << endl;
 cout << poprawny("a+b-c(") << endl;
 cout << poprawny("a+b-c=d*(-1123)") << endl;
 cout << poprawny("") << endl; // pusty napis zawierający wyrażenie uznajmy za poprawny
 cout << poprawny("-a-a-xx") << endl;
 cout << poprawny("--10") << endl; // uznajemy za niepoprawny, nie namnażamy minusów
 cout << poprawny("-(-10)") << endl; // ale taki jest już poprawny przez wzgląd na nawias
 cout << poprawny("1+(=a=a)") << endl;
 cout << poprawny("10^((a+b+43587*4)+(-10/a*b)+(u+i+g%10)/(-7-1/10))") << endl;
 cout << poprawny("a/(a=b)") << endl;
 cout << poprawny("))a+b((") << endl;
 cout << poprawny("a==b") << endl;
}