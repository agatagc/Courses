#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
string wylosowany_napis() {
 // angielskie 
 string litery = "qazwsxedcrfvtgbyhnujmikolpQAZWSXEDCRFVTGBYHNUJMIKOLP";
 char znak;
 int ile = 0;
 string wynik;
 do {
 znak = litery[rand() % litery.size()]; // losuję pozycję w napisie
 wynik += znak;
 ile++;
 } while (znak != 'z' and znak != 'A');
 cout << ile << endl;
 return wynik;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << wylosowany_napis() << endl;
}