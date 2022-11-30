#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

int a = 10;
double b = 4.54;
char c = 'a';
long long int d = 232; 

cout << sizeof(a) << endl;
cout << sizeof(b) << endl;
cout << sizeof(c) << endl;
cout << sizeof(d) << endl;


int a1 = 10;
double b2 = 4.54;
cout << sizeof(a1 + b2); 

return 0;
}   