#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<int> v = { 1,2,4,3,6,8,7,7,8,3,4,5,6,7,1,3,9,1,0,4,2,3,6,9 };
 // a 
 for (size_t i = 0; i < v.size() - 2; i++) {
 if (v[i] <= v[i + 1] and v[i + 1] <= v[i + 2]) // niemalejąca trójka liczb w wektorze?
 cout << v[i] << " " << v[i + 1] << " " << v[i + 2] << endl;
 }
 // b 
 int start = 0, pozm = 0, dl = 1, dlm = 0; // pozm: pozycja maksymalnego ciągu, dlm: 
 // długość maksymalnego ciągu
 for (size_t poz = 0; poz < v.size() - 1; poz++) {
 if (v[poz] <= v[poz + 1]) { // porządek zachowany
 if (dl == 1) start = poz; // pierwszy porządek po nieporządku
 dl++; // długość obecnego znalezionego porządku 
 if (dlm < dl) { // jeżeli obecna długość jest większa niż dotychczasowa maksymalna, 
 // zapamiętuję ją
 dlm = dl;
 pozm = start;
 }
 }
 else dl = 1; // brak porządku, zaczynamy od nowa numerowanie (nowa pozycja startowa, 
 // nowa długość)
 }
 cout << "Najdłuższy podciąg ";
 for (int i = pozm; i < pozm + dlm; i++) cout << v[i] << ",";
 cout << " zaczyna się na pozycji " << pozm << " i ma długość " << dlm << endl;
 // c 
 // zauważ, że największą liczbą w wektorze jest 9, najmniejszą 0. Wykorzystamy to! 
 vector<int> liczniki;
 liczniki.resize(10, 0); // 10 elementów o pozycji 0-9, z wartościami 0
 cout << endl;
 for (auto e : liczniki) cout << e << ","; // wszędzie wartości 0
 cout << endl;
 for (auto e : v) liczniki[e]++; // procedura zliczania! :D
 for (auto e : liczniki) cout << e << ","; // wartości po zliczaniu
 cout << endl;
 // prezentacja zliczenia 
 for (int poz = 0; poz < liczniki.size(); poz++) {
 cout << "Liczba " << poz << " wystąpień: " << liczniki[poz] << endl;
 }
 cout << "\n\n";
}