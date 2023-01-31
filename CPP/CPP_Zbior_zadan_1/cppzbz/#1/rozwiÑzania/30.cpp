#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 long long int waga = 1;
 int okrazenia = 13;
 vector<int> okrazenia_waga;
 okrazenia_waga.resize(okrazenia); // gromadzimy wagę po kolejnych okrążeniach
 okrazenia_waga[0] = 1; // pierwsze okrążenie (liczymy od 0)
 okrazenia_waga[1] = 1; // drugie okrążenie
 for (int okr = 2; okr < okrazenia; okr++) {
 // suma wag ostatnich dwóch okrążeń
 okrazenia_waga[okr] = okrazenia_waga[okr - 1] + okrazenia_waga[okr - 2];
 }
 cout << "Po okrążeniu = " << okrazenia << " waga bloba to " << okrazenia_waga ↪ 
 [okrazenia - 1] << endl;
 cout << "A oto historia wagi w kolejnych okrążeniach:";
 for (auto waga : okrazenia_waga) cout << waga << " ";
}