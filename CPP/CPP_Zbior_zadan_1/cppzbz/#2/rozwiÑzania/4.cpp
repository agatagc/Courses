Przykładowe rozwiązanie 1. 
#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
vector<int> vector_generator(int ile = 10, int start = 0, int koniec = 20) {
 // gdy do argumentu przypiszesz wartość, będzie ona domyślna 
 vector<int> v;
 for (int i = 1; i <= ile; i++) {
 int losowa = rand() % (koniec - start + 1) + start;
 int pozycja = (v.size()) ? rand() % v.size() : 0;
 v.insert(v.begin() + pozycja, losowa); // nie nadpisze, przesunie
 }
 return v;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 for (auto e : vector_generator(20)) cout << e << " ";
} 
Przykładowe rozwiązanie 2.
#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
int wylosuj_liczbe(int poczatek, int koniec) {
 return rand() % (koniec - poczatek + 1) + poczatek;
}
bool czy_wszystkie_zajete(const vector<bool>& wektor) {
 for (auto i : wektor) {
 if (!i) return false;
 }
 return true;
}
int main() {
 setlocale(LC_ALL, "");
 srand(time(0));
 vector<int> liczby(20, -1); // tworzę wektor złożony z dwudziestu liczb równych -1
 vector<bool> zajete_indeksy(liczby.size(), false); // tworzę wektor zajętych indeksów 
 // na początku żaden nie jest zajęty (true - zajęty) 
 while (!czy_wszystkie_zajete(zajete_indeksy)) { // jeżeli nie wszystkie zajęte
 int wylosowana = wylosuj_liczbe(0, 20);
 int indeks = wylosuj_liczbe(0, liczby.size() - 1);
 while (zajete_indeksy[indeks]) { // losuj, aż znajdziesz puste miejsce
 indeks = wylosuj_liczbe(0, liczby.size() - 1);
 }
 liczby[indeks] = wylosowana;
 zajete_indeksy[indeks] = true;
 }
 for (auto i : liczby) {
 cout << i << " ";
 }
}