#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<char> samogloski = { 'e','y','u','i','o','a' };
 vector<char> znaki;
 char pomoc;
 do {
 cout << ": ";
 cin >> pomoc;
 // test na samogłoskę
 bool jest = false;
 for (char e : samogloski) if (e == pomoc) {
 jest = true;
 break;
 }
 if (jest)
 znaki.insert(znaki.begin(), pomoc); // dodaj na początek
 else if (pomoc == '*' and znaki.size())
 znaki.erase(znaki.begin()); // usuwam pierwszy
 else if (pomoc == '#' and znaki.size())
 znaki.pop_back(); // wyrzucam z końca
 else znaki.push_back(pomoc); // dodaj na koniec
 // za każdym razem prezentuj zawartość wektora w celu monitorowania operacji 
 for (auto e : znaki) cout << e;
 cout << endl;
 } while (pomoc != '!');
}
/* Ciekawostka: W przypadku kontenerów vector<> usuwanie i dodawanie na końcu wektora jest 
wydajne. 
Operacje usuwania/dodawania w środku lub na początku wymagają przenoszenia 
kontenera w pamięci w nowe miejsce. Jednak dla potrzeb edukacji i przy tak 
malutkich programach kwestie optymalizacji możemy świadomie pomijać. */ 