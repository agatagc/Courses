//Przykładowe rozwiązanie 1.
#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 vector<int> v;
 int temp;
 for (int i = 5; i--;) {
 cin >> temp;
 v.push_back(temp);
 cout << temp << " ";
 }
 // test na ciąg rosnący (każda kolejna liczba musi być większa) 
 bool jest = true;
 for (size_t pozycja = 0; pozycja < v.size() - 1; pozycja++) {
 if (v[pozycja] >= v[pozycja + 1]) {
 jest = false;
 break;
 }
 }
 if (jest) cout << "Ciąg jest rosnący.";
} 

//Przykładowe rozwiązanie 2. 
#include <iostream> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 int poprzednia;
 int obecna;
 bool rosnacy = true;
 cin >> poprzednia;
 for (int i = 4; i--;) {
 cin >> obecna;
 if (rosnacy) { // jeśli wiemy, że ciąg może być rosnący
 if (obecna <= poprzednia)
 rosnacy = false;
 else
 poprzednia = obecna;
 }
 }
 if (rosnacy)
 cout << "Ciąg jest rosnący" << endl;
}