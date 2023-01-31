#include <iostream> 
#include <ctime> 
#include <vector> 
#include <string> 
using namespace std;
////////////////////////////////////////////////////// 
string zad50(string txt, int usun = 2) {
 bool del;
 cout << "przed: " << txt << endl;
 do {
 del = false;
 for (int i = 1; i < txt.size(); i++) {
 if (txt[i] == txt[i - 1]) {
 txt.erase(i - 1, usun);
 del = true;
 break;
 }
 }
 } while (del);
 return txt;
}
int main() {

 setlocale(LC_ALL, ""); srand(time(0));
 cout << zad50("skfuu12m2111flx") << endl;
 cout << zad50("npq985yy5vnprr8ettemzp9yamppp98tywnmtvb9q8y4nqp948tydlfaaafld") ↪
 << endl;
 cout << zad50("1abbbbaaccdccdeeddccaeffabcdefa121122") << endl;
 cout << zad50("skfuu12m2111flx", 1) << endl;
 cout << zad50("npq985yy5vnprr8ettemzp9yamppp98tywnmtvb9q8y4nqp948tydlfaaafld", 1) ↪ 
 << endl;
 cout << zad50("1abbbbaaccdccdeeddccaeffabcdefa121122", 1) << endl;
}