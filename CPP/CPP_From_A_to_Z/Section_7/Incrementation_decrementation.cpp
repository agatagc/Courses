#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

// INKREMENTACJA I DEKREMENTACJA 


int num = 3;

cout << num << endl;

//INKREMENTACJA
num++;
cout << num << endl;

//DEKREMENTACJA
num--;
cout << num << endl;



int num_1 = 10;
cout << num_1 << endl;

// PRE-INKREMENTACJA
cout << ++num_1 << endl;

// POST-INKREMENTACJA
cout << num_1++ << endl;
cout << num_1 << endl << endl;

cout << num_1 << endl;
// PRE-DEKREMENTACJA
cout << --num_1 << endl;
// POST-DEKREMENTACJA   
cout << num_1-- << endl;
cout << num_1 << endl;



 return 0;
}