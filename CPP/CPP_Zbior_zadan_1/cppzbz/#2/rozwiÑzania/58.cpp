#include <iostream> 
#include <ctime> 
#include <vector> 
#include <string> 
using namespace std;
////////////////////////////////////////////////////// 
struct Punkt {
 double x;
 double y;

};
string liniowa(Punkt a, Punkt b) {
 // (y−yA)(xB−xA)−((yB−yA)(x−xA))=0 // wzór funkcji dla dwóch punktów
 if (b.x - a.x == 0) return "problem z dzieleniem przez zero\n";
 /* po przekształceniu mamy coś takiego: 
 f(x) = x(yb-ya)/(xb-xa) + ya-xa(yb-ya)/(xb-xa); 
 */
 string wynik;
 wynik = "f(x) = ";
 wynik += to_string((b.y - a.y) / (b.x - a.x));
 wynik += " * x ";
 double bwsp = -a.x * (b.y - a.y) / (b.x - a.x) + a.y;
 if (bwsp >= 0) wynik += "+";
 wynik += to_string(bwsp);
 return wynik;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << liniowa({ 0,0 }, { 5,5 }) << endl; // f(x) = x
 cout << liniowa({ -2,0 }, { 2,-1 }) << endl; // f(x) = -1/4 * x - 1/2
 cout << liniowa({ 0,0 }, { 2,4 }) << endl; // f(x) = 2 * x;
 cout << liniowa({ 0,0 }, { 0,4 }) << endl; // pionowa linia to w zasadzie nie jest funkcja
}