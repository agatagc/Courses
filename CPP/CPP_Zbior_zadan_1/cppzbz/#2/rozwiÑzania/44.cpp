#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
const int SIZE = 15;
string trzy_generator() {
 string znaki = "abcdef";
 string wynik = "";
 int ile = 3;
 while (ile--)
 wynik += znaki[rand() % znaki.size()];
 return wynik;
}
bool odpowiedni(string s) {
 vector<string> szukane = { "abc","bcd","cde","def" };
 for (auto e : szukane)
 if (s == e) return true;
 return false;
}
bool test(vector<vector<string>>& W, int w, int k) {
 if (odpowiedni(W[w][k]) and
 odpowiedni(W[w + 1][k]) and
 odpowiedni(W[w][k + 1]) and
 odpowiedni(W[w + 1][k + 1])) return true;
 return false;
}
void zadanie44(vector<vector<string>>& W) {
 for (int w = 0; w < SIZE - 1; w++) {
 for (int k = 0; k < SIZE - 1; k++) {
 if (test(W, w, k)) {
 cout << "Znaleziono dla w= " << w << " k=" << k << endl;
 cout << W[w][k] << " ";
 cout << W[w][k + 1] << "\n";
 cout << W[w + 1][k] << " ";
 cout << W[w + 1][k + 1] << "\n";
 }
 }
 }
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << "ZAWARTOŚĆ WYGENEROWANA LOSOWO: \n\n";
 vector<vector<string>> W;
 W.resize(SIZE, {});
 for (auto& e : W) {
 for (int i = 1; i <= SIZE; i++) {
 e.push_back(trzy_generator());
 cout << e.back();
 if (i < SIZE) cout << ",";
 }
 cout << endl;
 }
 cout << endl;
 cout << string(60, '#') << endl;
 // dane stałe (dla sprawdzenia, czy wszystko działa) 
 W.clear(); // usuwam losowy zbiór i ustalam niżej sztywny dla testu
 W = {
 {"ebb","cbe","beb","bdd","fcf","eed","bdd","cfd","cec","fee","ebf","cba","bff","acf","aee"},
 {"ddc","eee","cac","cca","daa","cce","cbd","cad","afa","ced","fcc","cdd","cca","cfc","afd"},
 {"dad","afb","bae","ffd","dba","efd","bac","dda","cca","beb","add","fba","bbe","fbd","fab"},
 {"dfd","bcd","ecc","bfb","efb","cbb","dcf","afb","aaf","fcd","dee","dba","dca","baa","cee"},
 {"fab","fba","efc","dad","caf","bad","dba","afa","fbd","cbf","ccb","fda","cff","eac","bde"},
 {"efa","eac","ada","edd","fcd","fae","dff","cab","eab","dcc","dbd","bac","bfe","efe","eec"},
 {"ccc","bcc","fbf","afa","abc","cde","fec","faa","bfe","cac","acd","dad","eca","bbe","afd"},
 {"eba","abb","cfd","ccb","abc","def","ffc","ead","cdd","baf","bef","fbd","afb","bae","bfe"},
 {"fcf","acf","bdc","baa","cdf","adf","edb","cab","ebe","faf","dee","ddc","ebd","aad","eaa"},
 {"eee","aec","cbc","edd","bcf","fbb","acc","abf","dbc","cab","bcd","bbc","ebc","fee","fcd"},
 {"cdc","cef","bfe","def","ede","ade","ade","dea","cbc","bce","bce","cad","fbb","dbb","ccb"},
 {"feb","dba","afe","efa","add","aeb","bfc","bee","aca","acc","ebe","ead","ffa","baa","eca"},
 {"eea","fcd","bdf","baf","fdb","fdb","ddd","bce","eed","edf","efc","fca","dff","def","abc"},
 {"ebc","fcd","fad","cde","daf","eee","dfd","aaf","cff","dcc","aff","cfb","afc","bcd","cde"},
 {"cca","afe","daf","ecf","cfd","cdb","bfe","aea","ffe","dae","bae","fce","ade","bbc","fcd"}
 };
 zadanie44(W);
} 
