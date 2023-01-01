#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

// INKREMENTATION I DEKREMENTATION


int num = 3;

cout << num << endl;

//INKREMENTATION
num++;
cout << num << endl;

//DEKREMENTATION
num--;
cout << num << endl;



int num_1 = 10;
cout << num_1 << endl;

// PRE-INKREMENTATION
cout << ++num_1 << endl;

// POST-INKREMENTATION
cout << num_1++ << endl;
cout << num_1 << endl << endl;

cout << num_1 << endl;



// PRE-DEKREMENTATION
cout << --num_1 << endl;



// POST-DEKREMENTATION 
cout << num_1-- << endl;
cout << num_1 << endl;



 return 0;
}