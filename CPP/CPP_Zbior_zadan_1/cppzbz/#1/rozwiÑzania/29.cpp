#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<bool> dane = { 
1,1,0,1,0,0,0,0,0,1,1,1,1,1,0,1,0,0,1,0,1,1,0,0,0,1,1,0,0,1,1,1,0,0,1,0,0,0,0,0,1,1,
0,0,0,1,1,1,1,1,0,0,0,1,1,0,1,0,1,0,0,0,1,0,0,0,0,1,0,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,
1,0,1,0,0,1,1,0,1,0,0,1,1,0,1,1,1,0,0,0,0,1,0,0,0,1,1,0,1,0,1,1,0,1,0,1,1,1,1,1,1,0,
0,1,0,0,1,1,1,0,0,1,0,0,1,1,0,1,0,0,1,1,0,0,1,0,1,0,1,1,0,1,1,0,0,1,1,0,0,1,0,0,1,0,
0,0,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,0,1,1,0,1,0,1,0,1,0,1,0,1,1,0,1,1,1,0,0,
1,1,0,0,1,0,0,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,0,0,1,1,1,1,1,1,1,0,1,0,1,0,0,0,1,1,0,0,
0,1,0,0,0,0,1,1,0,1,0,1,1,0,0,0,1,1,1,1,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,0,0,0,0,1,1,
0,1,1,1,1,0,1,0,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,1,1,0,0,1,1,1,0,0,0,1,1,1,1,0,0,1,0,0,
0,1,1,1,1,0,0,0,1,1,0,1,0,1,0,0,1,1,1,1,1,0,1,0,1,1,1,1,1 }; 
// 1 i 0 są łatwo konwertowalne na true i false
 cout << "Liczba dni: " << dane.size() << endl;
 // a 
 int sukces_dni = 0;
 for (bool dzien : dane) {
 if (dzien) sukces_dni++;
 }
 cout << "W czasie " << dane.size() << " dni Kasia odniosła sukces " << sukces_dni << ↪
 " razy.\n\n";
 // b 
 int okresy5 = 0; // odpowiedź
 int czas = 0; // pomocnicza zmienna
 vector<int> poczatki; // początkowe dni okresów porażek trwających minimum 5 dni
 int dzien = 1;
 for (bool sukces : dane) {
 if (!sukces) { // jeżeli true
 czas++;
 }
 else {
 if (czas >= 5) {
 okresy5++;
 poczatki.push_back(dzien - czas);
 }
 czas = 0;
 }
 dzien++;
 }
 cout << "Okresów trwających przynajmniej 5 dni bez właściwej diety było: " ↪ 
 << okresy5 << endl;
 cout << "Początkowe dni okresów to: ";
 for (auto start : poczatki) cout << start << " ";
} 