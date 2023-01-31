#include <iostream> 
#include <ctime> 
#include <vector> 
#include <cmath> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
struct A {
 int a;
 string b;
 float c;
 char d;
};

void dopisz(A& element, string plik, bool dopisz = true) { // dopisz na koniec pliku 
 ofstream p;
 if (dopisz) p.open(plik, ios_base::app); // ios_base::app sprawia, że można dopisać 
 // do pliku
 else p.open(plik); // otwieram, ale nie żeby dodać, ale by utworzyć całkiem nowy plik
 p << element.a << ";" << element.b << ";" << element.c << ";" << element.d << ↪
 endl; // a;b;c;d w linii pliku
 p.close();
 // uwaga: jeżeli A.b będzie napisem zawierającym znak średnika, pomysł na zapis zostanie zepsuty; 
 // zakładam jednak, dla uproszczenia, że napis nie będzie zawierać średnika 
}
void dopisz(vector<A>& v, string plik) { // zapisz cały wektor (przeciążenie funkcji)
 ofstream p;
 p.open(plik, ios_base::app); // ios_base::app sprawia, że można dopisać do pliku 
 for (auto& e : v)
 p << e.a << ";" << e.b << ";" << e.c << ";" << e.d << endl; // a;b;c;d w linii pliku
 p.close();
}
vector<A> pobierz(string plik) { // załaduj dane, zakładamy poprawność pliku
 ifstream p;
 p.open(plik);
 vector<A> v;
 while (!p.eof()) {
 A element;
 string pomoc;
 // jeśli jest pusty wiersz na końcu, to nic nie czytam 
 if (!(getline(p, pomoc, ';')).good()) break;
 element.a = stoi(pomoc); // int
 getline(p, pomoc, ';');
 element.b = pomoc; // string
 getline(p, pomoc, ';');
 element.c = stof(pomoc); // float
 p >> element.d; // char
 v.push_back(element);
 }
 p.close();
 return v;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 // przykłady użycia funkcji (powstanie plik zad36.txt) 
 A a({ 1,"kaszanka",4.5,'a' }); // nowy element typu A, dane zostaną wstawione 
 // do a.a, a.b, a.c, a.d 
 dopisz(a, "zad36.txt", false); // utwórz plik od nowa, dopisz linię
 a.a++;
 a.b += " jest fajna";
 a.c *= 2;
 a.d = 'b';
 dopisz(a, "zad36.txt"); // dopisz linię
 vector<A> v = { {1,"2",3.5,'4'},{2,"3",4.5,'5'} };
 dopisz(v, "zad36.txt"); // dopisz cały wektor elementów
 vector<A> laduj = pobierz("zad36.txt"); // pobiera z pliku elementy, daje wektor
 cout << "Załadowane dane z pliku: \n";
 for (auto& e : laduj) {
 cout << e.a << " " << e.b << " " << e.c << " " << e.d << endl;
 }
}