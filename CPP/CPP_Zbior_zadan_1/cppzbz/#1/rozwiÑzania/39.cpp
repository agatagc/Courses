#include <iostream> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, "");
 vector<char> znaki = { 'x','P','Q','4','\n','%','u','@','e',
 'T','B','$', '!',':','"','1','<','d','k','L','$',')','$','B','x',
 'w','q','P','c','X','B','>','?','[','r','x','$','#','}','|','d','l','n','b','V','!' };
 unsigned suma_znakow = 0;
 for (auto e : znaki) if (e >= 48 and e <= 48 + 9) suma_znakow += e - 48;
 cout << "Suma znaków: " << suma_znakow << endl;
 // usuwam znaki, które są na początku i na końcu, aby ich nie wyświetlać
 char s = znaki.front();
 char k = znaki.back();
 for (int poz = 0; poz < znaki.size(); poz++) {
 if (znaki[poz] == s or znaki[poz] == k) {
 znaki.erase(znaki.begin() + poz);
 poz--;
 continue;
 }
 }
 // rozpoczynam poszukiwania powtarzających się znaków, które nie leżały na początku 
 // i końcu wektora 
 for (int poz = 0; poz < znaki.size(); poz++) {
 bool dublet = false;
 for (int spr = poz + 1; spr < znaki.size(); spr++) {
 if (znaki[poz] == znaki[spr]) { // jest powtórka
 dublet = true;
 // teraz usuwam powtórzenia, by ponownie nie wyświetlić powtórki 
 znaki.erase(znaki.begin() + spr);
 spr--;
 }
 }
 if (dublet) {
 cout << znaki[poz] << endl;
 }
 }
}