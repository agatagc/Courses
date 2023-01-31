#include <iostream> 
#include <vector> 
#include <fstream> 
using namespace std;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 ifstream plik;
 plik.open("liczby.txt"); // z zadania #2.31
 int n;
 vector<int> v;
 while (!plik.eof()) {
 // uwaga: gdy w pliku jest wiersz pusty, np. na końcu pliku, co 
 // jest częste w danych źródłowych do zadań maturalnych, 
 // można sprawdzić poprawność odczytu jak niżej 
 if (plik >> n) v.push_back(n);
 }
 plik.close();
 for (auto e : v) cout << e << " ";
}