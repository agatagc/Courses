#include <iostream> 
#include <ctime> 
#include <vector> 
#include <fstream> 
using namespace std;
typedef long long int L;
////////////////////////////////////////////////////// 
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 ofstream plik;
 plik.open("liczby.txt");
 int n;
 do {
 n = rand() % 1001;

 if (n % 10 == 0) { // if (!n%10)
 plik << n << endl;
 }
 } while (n != 1000);
 plik.close();
}