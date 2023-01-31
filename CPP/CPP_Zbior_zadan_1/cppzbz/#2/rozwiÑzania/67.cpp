#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
bool palindrom(string txt) {
 for (int s = 0, k = txt.size() - 1; s <= k; s++, k--) {
 if (txt[s] != txt[k]) return false;
 }
 return true;
}
vector<string> palindromy(string baza) {
 vector<string> r;
 string alfabet = "qazwsxedcrfvtgbyhnujmikolp";
 for (int dl = 2; dl <= baza.size() - 1; dl++) {
 for (int poz = 0; poz + dl <= baza.size() - 1; poz++) {
 string temp = baza.substr(poz, dl);
 if (palindrom(temp)) r.push_back(temp);
 }
 }
 return r;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 for (auto e : palindromy("kajakrobbokonstruktorbabajaganogimajakpajakapiraci↪
 krzyczaaghrrrrhga"))
 cout << e << endl;
}