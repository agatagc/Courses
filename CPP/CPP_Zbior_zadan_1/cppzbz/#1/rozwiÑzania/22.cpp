#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<int> v;
 int pomoc;
 while (true) {
 cout << ": ";
 cin >> pomoc;
 v.push_back(pomoc);
 if (v.size() >= 2 && v.back() == v[v.size() - 2]) break; // porównanie dwóch 
 // ostatnich elementów
 }
}