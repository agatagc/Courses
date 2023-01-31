#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 ifstream plik;
 plik.open("34_dane.txt");
 /* 
1;231;3423;dowolnie długi napis 
321;345;67;inny długi napis 
-351;211;0;potwornie długi napis, inny niż wszystkie 
 */ 
 string napis, pomoc;
 vector<L> v; 
 int i = 1;
 while (!plik.eof() ) {
 if (i % 4 != 0) {
 getline(plik, pomoc, ';');
 if (pomoc.find_first_of("0123456789")!=string::npos)
 v.push_back(stoll(pomoc)); // stoll: string -> long long int
 }
 else {
 getline(plik, pomoc);
 napis += pomoc;
 } 
 i = (i + 1) % 4;
 }
 plik.close();
 for (auto e : v) cout << e << " ";
 cout << endl << napis << endl;
}