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
string sylaba_generator(string srodek = "eo",
 string prefix = "srjcg",
 string postfix = "wrtpsdfghjklzcbnm") {
 string sylaba = "";
 return ((sylaba += prefix[rand() % prefix.size()])
 += srodek[rand() % srodek.size()])
 += postfix[rand() % postfix.size()];
}
string generuj() {
 string imie("");
 int sylab = rand() % 4 + 1; // 1-4
 if (sylab & 1) { // nieparzysta liczba sylab
 vector<string> srodki{ "e","o" };
 int poz_srodek = rand() % 2;
 for (int i = 1; i <= sylab; i++) {
 imie += sylaba_generator(srodki[poz_srodek]);
 poz_srodek = (poz_srodek + 1) % 2;
 }
 }
 else { // parzysta liczba sylab
 string srodek = (rand() % 2) ? "e" : "o";
 for (int i = 1; i <= sylab; i++) imie += sylaba_generator(srodek);
 }
 return imie;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 int i = 15;
 while (i--)
 cout << generuj() << endl;
}