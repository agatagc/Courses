#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 char znak;
 cin >> znak; // wpisz tylko małe litery angielskie lub cyfry
 vector<char> samogloski = { 'a','e','i','o','u','y' };
 // kod '0' to 48, '1' to 49 itd.; przy porównaniu char jest rzutowany na liczbę
 if (znak >= 48 and znak <= 48 + 9) {
 cout << "Znak to cyfra.\n";
 return 0; // zakończ program
 }
 bool samogloska = false;
 for (auto s : samogloski)
 if (znak == s) {
 samogloska = true;
 break;
 }
 if (samogloska) cout << "Znak to samogłoska.\n";
 else cout << "Znak to spółgłoska.\n";
}