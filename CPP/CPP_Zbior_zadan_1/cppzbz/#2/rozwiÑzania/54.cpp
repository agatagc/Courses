/*Wersja prosta 
imiona.txt 
Bogdan 
Magda 
Barbara 
Tobiasz 
Odorian 
Kapustan 
Śliwianna 
Waldemaria 
Wanna 
Brytfanka 
Pomiar 
Bodziomił
Gryczan 
Karaczanna 
Melisa 
Amebon 
Mikser 
nazwiska.txt 
Kowalski 
Nowak 
Abecadłowski 
Brutusowicz 
Cebulak 
Dobrodziej 
Emulatorski 
Fajczyński 
Gromosławski 
Hamburgerowicz 
Iwański 
Jabłoński 
Kod: */
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
string generate() {
 ifstream imiona, nazwiska;
 imiona.open("imiona.txt");
 nazwiska.open("nazwiska.txt");
 vector<string> vimiona, vnazwiska;
 string temp;
 while (getline(imiona, temp).good())
 vimiona.push_back(temp);
 while (getline(nazwiska, temp).good())
 vnazwiska.push_back(temp);
 imiona.close();
 nazwiska.close();
 return string(vimiona[rand() % vimiona.size()]
 + " " + vnazwiska[rand() % vnazwiska.size()]);
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << generate() << endl;
 cout << generate() << endl;
 cout << generate() << endl;
 cout << generate() << endl;
} 
/*
Wersja z uwzględnieniem płci 
imiona.txt, m,k,mk (męskie lub żeńskie imię) 
Bogdan;m 
Magda;k 
Barbara;k 
Tobiasz;m 
Odorian;m 
Kapustan;m 
Śliwianna;k 
Waldemaria;k 
Wanna;k 
Brytfanka;k 
Pomiar;m 
Bodziomił;m 
Gryczan;m 
Karaczanna;k 
Melisa;k 
Amebon;mk 
Mikser;m 
nazwiska.txt 
Kowalski;Kowalska 
Nowak;Nowak 
Abecadłowski;Abecadłowska 
Brutusowicz;Brutusowicz 
Cebulak;Cebulak 
Dobrodziej;Dobrodziej 
Emulatorski;Emulatorska 
Fajczyński;Fajczyńska 
Gromosławski;Gromosławska 
Hamburgerowicz;Hamburgerowicz 
Iwański;Iwańska 
Jabłoński;Jabłońska 
Kod: 
*/
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
string generate() {
 ifstream imiona, nazwiska;
 imiona.open("imiona.txt");
 nazwiska.open("nazwiska.txt");
 vector<string> vimiona, vnazwiska;
 string temp;
 while (getline(imiona, temp).good())
 vimiona.push_back(temp);
 while (getline(nazwiska, temp).good()) {
 vnazwiska.push_back(temp);
 }
 imiona.close();
 nazwiska.close();
 string itemp = vimiona[rand() % vimiona.size()];
 string ntemp = vnazwiska[rand() % vnazwiska.size()];
 auto poz = itemp.find(";");
 string imie = itemp.substr(0, poz); // do średnika
 string plec = itemp.substr(poz + 1); // za średnikiem
 string nazwisko;
 poz = ntemp.find(";");
 nazwisko = (plec == "k") ? ntemp.substr(poz + 1) : ntemp.substr(0, poz);
 return imie + " " + nazwisko;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << generate() << endl;
 cout << generate() << endl;
 cout << generate() << endl;
 cout << generate() << endl;
}