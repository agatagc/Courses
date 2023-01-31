#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
////////////////////////////////////////////////////// 
vector<int> losowanko() {
 vector<int> v;
 int losowa, od = 1;
 do {
 losowa = rand() % (1000 - od + 1) + od;
 cout << "losowa=" << losowa << endl;
 od = losowa;
 v.push_back(losowa);
 } while (losowa < 1000);
 return v;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 for (auto e : losowanko()) cout << e << " ";
}