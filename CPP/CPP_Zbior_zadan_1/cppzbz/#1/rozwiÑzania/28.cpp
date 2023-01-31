#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<char> cyfry;
 char znak;
 do {
 cout << ": ";
 cin >> znak;
 // skorzystaj z faktu, że char jest łatwo konwertowalny na int, gdzie '0' ma kod 48 itd. 
 if (znak >= 48 and znak <= 48 + 9) {
 cyfry.push_back(znak);
 cout << "dodałem " << znak - 48 << "\n";
 }
 else {
 cout << "ignoruję znak\n";
 }
 } while (cyfry.size() < 5);
 long long int x = 0;
 for (int poz = cyfry.size() - 1, podstawa = 1; poz >= 0; poz--, podstawa *= 10) {
 x += (cyfry[poz] - 48) * podstawa;
 }
 cout << "Liczba to: " << x << endl;
} 