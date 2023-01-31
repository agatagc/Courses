Przykładowe rozwiązanie 1. 
#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 vector<int> v = { 3,2,4,3,5,4,6,5,6,8 };
 while (v.size()) {
 cout << v.front() << " ";
 v.front() = v.back();
 v.pop_back();
 }
} 
Przykładowe rozwiązanie 2. 
#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 vector<int> v = { 3,2,4,3,5,4,6,5,6,8 };
 auto iter = v.begin();
 while (iter != v.end()) cout << *iter++ << " "; // czary :)
 // iter++ przesuwa wskaźnik (iterator) na kolejny element, 
 // a operator * pobiera wartość, na którą wskazuje iterator. 
 // Całość trwa, dopóki iterator nie wskoczy za ostatni element wektora 
} 