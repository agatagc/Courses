#include <iostream> 
#include <ctime> 
using namespace std;
////////////////////////////////////////////////////// 
pair<int,char> zad10() {
 int temp, L = rand() % 11 + 20;
 temp = L;
 cout << "L=" << L << endl << ":";
 char Z;
 cin >> Z;
 while (temp--) cout << Z;
 cout << endl;
 return { L, Z };
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 auto p = zad10();
 // zerknij na to ;) 
 cout << string(p.first,p.second) << endl; 
}