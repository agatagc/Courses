#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<int> v1 = { 1,3,5,7,9 };
 vector<int> v2 = { 1,4,7,11,15 };
 vector<int> v3 = { 1,2,3,4,5,6,7,8,9,20 };
 // a 
 cout << "v1 część wspólna z v2 = ";
 for (auto e1 : v1) {
 for (auto e2 : v2) {
 if (e1 == e2) cout << e1 << " ";
 }
 }
 cout << "\n\n";
 // b 
 vector<int> v12{}; // wektor z sumą v1+v2
 v12.insert(v12.begin(), v1.begin(), v1.end()); // v12 zawiera wszystko z v1
 vector<int> v312; // wektor z różnicą v3-(v1+v2)
 // dodam elementy z v2 do v12 (ze sprawdzeniem, czy ich tam już nie ma) 
 for (auto dodaj : v2) {
 bool jest = false;
 for (auto e : v12) {
 if (e == dodaj) {
 jest = true; // element już jest, nie dodam go
 break;
 }
 }
 if (!jest) v12.push_back(dodaj); // nie ma, więc dodaję
 }
 cout << "v3 - v1+v2 = ";
 for (auto e : v3) {
 bool jest = false;
 for (auto f : v12) {
 if (e == f) {
 jest = true;
 break;
 }
 }
 if (!jest) v312.push_back(e);
 }
 for (auto e : v312) cout << e << " ";
 cout << "\n\n";
 // c 
 vector<int> v123 = v12; // v123 będzie sumą v12 i v3, gdzie v12 był sumą v1 i v2
 cout << "v1+v2+v3 = ";
 for (auto dodaj : v3) {
 bool jest = false;
 for (auto e : v123) {
 if (e == dodaj) {
 jest = true;
 break;
 }
 }
 if (!jest) v123.push_back(dodaj); // nie ma, więc dodaję
 }
 for (auto e : v123) cout << e << " ";
 cout << endl;
 // c, wersja po cwaniacku 
 // można zauważyć, że v3-(v1+v2) daje liczby, które po dodaniu do v12 dadzą odpowiedź :) 
 vector<int> suma = v12;
 // na koniec wektora suma() doklejam zawartość v312 
 suma.insert(suma.end(), v312.begin(), v312.end()); 
 cout << "v1+v2+v3 = ";
 for (auto e : suma) cout << e << " ";
}