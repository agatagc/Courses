#include <iostream> 
#include <vector> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
UL ostatni(UL N=100, int K = 3) {
 vector<UL> v;
 for (int i = 1; i <= N; i++) v.push_back(i);
 UL pozycja = 0;
 while (v.size() > 1) {
 pozycja = (pozycja + K) % v.size(); 
 v.erase(v.begin() + pozycja);
 // zachowanie cykliczności przy skasowaniu ostatniego elementu 
 if (pozycja == v.size()) pozycja = 0; 
 }
 return v[0];
}
int main() {
 setlocale(LC_ALL, "");
 UL o;
 o = ostatni(100,3);
 cout << "\nOstatnia ocalała liczba to: " << o << endl;
 o = ostatni(6, 3);
 cout << "\nOstatnia ocalała liczba to: " << o << endl;
 o = ostatni(8, 3);
 cout << "\nOstatnia ocalała liczba to: " << o << endl;
}