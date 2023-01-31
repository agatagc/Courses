Rozwiązanie 1. Wykorzystuję sprawdzanie błędów: try-catch. 
#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
bool czyDouble(string& txt) { // sprawdzam, czy txt da się zamienić na double 
 try {
 stod(txt);
 }
 catch (exception e) {
 return false;
 }
 return true;
}
int main() {
 setlocale(LC_ALL, "");
 setlocale(LC_NUMERIC, "C"); // przeczyta -31.21 jako double
 ifstream plik;
 plik.open("35_dane.txt");
 string wiersz, fragment;
 vector<string> napisy;
 /* 
1;231;3423;dowolnie długi napis;345456;inny napis 
napis;321;345;67;inny długi napis;8893;krótki tekst;123123;1212;12;tekst 
-31.21;napis kosmiczny;0.001;-1.0;2 
 */
 while (!plik.eof() and getline(plik >> std::ws, wiersz)) { // cały wiersz
 // analiza wiersza od średnika do średnika 
 int pozp = 0, pozk = -1;
 while ((pozk = wiersz.find(";", ++pozk)) != string::npos) {
 fragment = wiersz.substr(pozp, pozk - pozp);
 pozp = pozk + 1;
 if (czyDouble(fragment)) {
 cout << stod(fragment) << endl;
 }
 else {
 napisy.push_back("#" + fragment + "#");
 }
 }
 fragment = wiersz.substr(pozp);
 if (czyDouble(fragment)) {
 cout << fragment << endl;
 }
 else {
 napisy.push_back("#" + fragment + "#");
 }
 }
 for (auto e : napisy) cout << e << endl;
 plik.close();
} 

Rozwiązanie 2. Wykorzystuję tylko podstawowe rzeczy. 
#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
bool czyDouble(string& txt) { // sprawdzam, czy txt da się zamienić na double
 if (txt == "") return false; // pusty napis to nie liczba
 if (txt.find_first_of("0123456789") == string::npos) return false; // nie ma cyfr
 string pomoc = txt;
 int poz = 0;
 while ((poz = pomoc.find_first_of("0123456789")) != string::npos) {
 pomoc.erase(pomoc.begin() + poz); // usuwam cyfry, powinno zostać nic lub . albo -.
 }
 if (pomoc == "." or pomoc == "-." or pomoc == "") return true;
 return false;
}
int main() {
 setlocale(LC_ALL, "");
 setlocale(LC_NUMERIC, "C"); // "12.3" -> 12.3
 ifstream plik;
 plik.open("35_dane.txt");
 string wiersz, fragment;
 vector<string> napisy;
 /* 
1;231;3423;dowolnie długi napis;345456;inny napis 
napis;321;345;67;inny długi napis;8893;krótki tekst;123123;1212;12;tekst 
-31.21;napis kosmiczny;0.001;-1.0;2 
 */
 while (!plik.eof() and getline(plik >> std::ws, wiersz)) {
 // analiza wiersza od średnika do średnika 
 int pozp = 0, pozk = -1;
 while ((pozk = wiersz.find(";", ++pozk)) != string::npos) {
 fragment = wiersz.substr(pozp, pozk - pozp);
 pozp = pozk + 1;
 if (czyDouble(fragment)) {
 cout << stod(fragment) << endl;
 }
 else {
 napisy.push_back("#" + fragment + "#");
 }
 }
 fragment = wiersz.substr(pozp);
 if (czyDouble(fragment)) {
 cout << fragment << endl;
 }
 else {
 napisy.push_back("#" + fragment + "#");
 }
 }
 for (auto e : napisy) cout << e << endl;
 plik.close();
} 
Rozwiązanie 3. Wykorzystuję stringstream (napis jest źródłem, jakby był
plikiem, z którego mogę czytać). 
#include <iostream> 
#include <vector> 
#include <fstream> 
#include <string> 
#include <sstream> // stringstream
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 ifstream plik;
 plik.open("35_dane.txt");
 string wiersz, fragment;
 vector<string> napisy;
 /* 
1;231;3423;dowolnie długi napis;345456;inny napis 
napis;321;345;67;inny długi napis;8893;krótki tekst;123123;1212;12;tekst 
-31.21;napis kosmiczny;0.001;-1.0;2 
 */
 while (!plik.eof() and getline(plik >> std::ws, wiersz)) {
 stringstream ss{ wiersz += ";" };
 double n;
 string txt;
 while (getline(ss, txt, ';').good()) {
 stringstream spom{ txt };
 if (spom >> n) {
 cout << n << endl;
 }
 else {
 napisy.push_back("#" + txt + "#");
 }
 }
 }
 for (auto e : napisy) cout << e << endl;
 plik.close();
}
