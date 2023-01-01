#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {



// RELATION OPERATORS

int num_5, num_6;

cout << "enter two numbers: ";
cin >> num_5 >> num_6;
 
// Comparison operator ==
cout << num_5 << " == " << num_6 << " : " << (num_5 == num_6) << endl;

// Inequality operator !=
cout << num_5 << " != " << num_6 << " : " << (num_5 != num_6) << endl;

// Greater than >
cout << num_5 << " > " << num_6 << " : " << (num_5 > num_6) << endl;

//Less than <
cout << num_5 << " < " << num_6 << " : " << (num_5 < num_6) << endl;

// Greater than or equal to >=
cout << num_5 << " >= " << num_6 << " : " << (num_5 >= num_6) << endl;

// Less than or equal to <=
cout << num_5 << " <= " << num_6 << " : " << (num_5 <= num_6) << endl;

return 0;
}