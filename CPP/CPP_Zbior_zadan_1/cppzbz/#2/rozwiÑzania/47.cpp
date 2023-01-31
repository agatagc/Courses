#include <iostream> 
#include <ctime> 
#include <vector> 
#include <string> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
UL wystapienia(vector<L>& v, L x) {
 UL ile = 0;
 for (auto e : v) if (e == x) ile++;
 return ile;
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 vector<L> v{ 1,2,3,4,5,6,7,6,5,4,3,4,5,6,7 };
 cout << wystapienia(v, 7);
}