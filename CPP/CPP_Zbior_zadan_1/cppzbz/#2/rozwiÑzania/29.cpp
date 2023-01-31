#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
double liniowa(vector<double>wsp, double x) {
 return wsp[0] * x + wsp[1];
}
void zliczaj(vector<vector<double>>& punkty) {
 L na = 0, pod = 0, nad = 0;
 for (auto& v : punkty) {
 if (v[1] == liniowa({ 2,3 }, v[0])) // 2x+3 dla {x[0]}
 na++;
 else if (v[1] > liniowa({ 2,3 }, v[0]))
 nad++;
 else pod++;
 }
 cout << "Nad=" << nad << " Pod=" << pod << " Na=" << na << endl;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 vector<vector<double>> punkty; // wektor zawiera wektory
 punkty.resize(100); // 100 punktów
 for (auto& v : punkty) { // losuj punkt {x,y}
 v.push_back((rand() % 201 - 100) / 10.0); // x
 v.push_back((rand() % 201 - 100) / 10.0); // y
 }
 zliczaj(punkty);
 // uwaga: "na" będzie najczęściej równe 0, trudno strzelić
 punkty.clear();
 punkty.resize(0);
 punkty = { {0,1},{1,10},{2,7} };
 zliczaj(punkty);
}
