#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<float> liczby;
 float a, b;
 do {
 cout << "Podaj liczbę: ";
 cin >> a;
 cout << "Podaj liczbę: ";
 cin >> b;
 liczby.push_back(a);
 liczby.push_back(b);
 if (a * b <= 1000.0) liczby.push_back(a * b);
 // oglądam zawartość dla prezentacji 
 for (auto e : liczby) cout << e << " ";
 cout << endl;
 } while (a * b <= 1000);
}