#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {



// OPERATORY RELACYJNE

int num_5, num_6; 

cout  << "enter two numbers: ";
cin >> num_5 >> num_6;

// Operator porownania ==
cout << num_5 << " == " << num_6 << " : " << (num_5 == num_6) << endl;

// Operator nierownosci !=
cout << num_5 << " != " << num_6 << " : " << (num_5 != num_6) << endl;

// Większy niz >
cout << num_5 << " > " << num_6 << " : " << (num_5 > num_6) << endl;

//Mniejszy niz <
cout << num_5 << " < " << num_6 << " : " << (num_5 < num_6) << endl;

// Większy lub rowny >=
cout << num_5 << " >= " << num_6 << " : " << (num_5 >= num_6) << endl;

// Mniejszy lub rowny <=
cout << num_5 << " <= " << num_6 << " : " << (num_5 <= num_6) << endl;

return 0;
}
