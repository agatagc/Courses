#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 vector<int> v;
 vector<int> ostatnie3;
 int suma, pozycja = 0;
 ostatnie3.resize(3, 0); // ustaw 3 elementy i przypisz im wartość 0
 L ile = 0;
 do {
 suma = 0;
 int losowa = rand() % 100 + 1;
 ile++;
 if (!v.size() or v.back() <= losowa) {
 v.push_back(losowa);
 }
 cout << losowa << " ";
 ostatnie3[pozycja] = losowa; // zapis ostatnich 3 elementów
 pozycja = (++pozycja) % 3; // pozycja = 0,1,2,0,1,2,0,1,2,0,1,2 
 // obliczam sumę (muszą być minimum 3 elementy) 
 for (auto e : ostatnie3) {
 if (e == 0) {
 suma = 0;
 break;
 }
 suma += e;
 }
 } while (!(suma >= 80 and suma <= 90));
 cout << "\nWektor zapisanych liczb:\n";
 for (auto e : v) cout << e << " ";
 cout << endl;
 cout << "Ile=" << ile << endl;
}