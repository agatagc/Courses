#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;

////////////////////////////////////////////////////// 
struct Opad {
 UL sekunda;
 UL sztuk;
};
struct Drzewo {
 UL sztuk = 3000;
 UL czas_opadania = 0;
 vector<Opad> opadanie;
};
// cechy opadania 
Opad opad() {
 UL sek = rand() % 10 + 1;
 int szansa = rand() % 100 + 1;
 UL sztuk;
 if (szansa <= 50) {
 sztuk = rand() % 4; // 0-3
 }
 else if (szansa <= 80) {
 sztuk = rand() % 4 + 4; // 4-7
 }
 else {
 sztuk = rand() % 3 + 8; // 8-10
 }
 return Opad{ sek,sztuk };
}
// tworzenie historii opadania 
void zdarzenie(Drzewo& d) {
 d.opadanie.push_back(opad()); 
 if (d.sztuk < d.opadanie.back().sztuk) {
 d.opadanie.back().sztuk = d.sztuk; 
 }
 d.sztuk -= d.opadanie.back().sztuk; // tyle liści z drzewa spadło
 d.czas_opadania += d.opadanie.back().sekunda; // tyle trwa łącznie proces opadania
}
void symulacja_opadania(Drzewo& d) {
 while (d.sztuk > 0) {
 zdarzenie(d);
 cout << "Po " << d.czas_opadania << " sekundach pozostało " << d.sztuk << ↪
 " liści.\n";
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 Drzewo D;
 symulacja_opadania(D);
// spis wydarzeń (przywróć poniższy komentarz, jeżeli chcesz zobaczyć kolejne wydarzenia) 
// for (Opad o: D.opadanie) cout << o.sekunda << "sek " << o.sztuk << "szt\n"; 
// odpowiedzi do symulacji 
// po jakim czasie (podaj w godzinach, minutach i sekundach) drzewo straciło wszystkie liście? [1,] 
 cout << "OPADANIE: " << D.czas_opadania << "sek, czyli:\n";
 UL g;
 UL m;
 UL s;
 g = D.czas_opadania / 3600;
 cout << g << "godz ";
 m = (D.czas_opadania - (g * 3600)) / 60;
 cout << m << "min ";
 s = (D.czas_opadania - g * 3600 - m * 60);
 cout << s << "sek\n";
 // jaki procent opadania stanowiły opady zawierające od 0 do 3 liści? [1,] 
 UL maks = D.opadanie.size(); // wszystkie opady
 UL ile0_3 = 0;
 for (Opad& o : D.opadanie) if (o.sztuk <= 3) ile0_3++;
 // jeżeli symulacja jest prawidłowa, 
 // procent powinien oscylować w okolicach 0.5, czyli 50% 
 cout << "Procent opadania liści w ilościach od 0 do 3 wynosi " 
 << ile0_3 * 1.0 / maks * 100.0 << "%" << endl;
 // ile razy w krokach symulacji nie spadł ani jeden liść? (losowało się 0 liści) [1,] 
 // powinna to być 1/4 z około 50%, czyli w okolicach 12,5% (uruchom symulację kilka razy) 
 UL ile0 = 0;
 for (Opad& o : D.opadanie) if (o.sztuk == 0) ile0++;
 cout << "Procent opadania liści w ilościach równych 0 wynosi " 
 << ile0 * 1.0 / maks * 100.0 << "%" << endl;
 // przyjmij, że ponumerowaliśmy kolejne kroki symulacji (zdarzenie opadania); 
 // znajdź 10 kolejnych (następujących po sobie) kroków, dla których 
 // spadło najmniej liści; podaj numery tych kroków 
 int zakres = 10;
 int najmniej = 10 * 10; // w 10 krokach nie mogło spaść więcej
 UL start = 0;
 for (UL poz = 0; poz <= D.opadanie.size() - zakres; poz++) {
 int spadlo = 0;
 for (int i = poz; i < poz + zakres; i++) spadlo += D.opadanie[i].sztuk;
 if (najmniej > spadlo) {
 najmniej = spadlo;
 start = poz;
 }
 }
 cout << "Najmniej liści w 10 krokach, bo " << najmniej << " spadło od kroku " 
 << start << " do kroku " << start + zakres - 1 << endl;
}