#include <iostream>

using namespace std;

int main()
{

int num_1 = 5;
int num_2 = 10;

cout << &num_1 << " " << num_1 << endl;
cout << &num_2 << " " << num_2 << endl;

// const int *pointer = &num_1;

// // *pointer = num_2; // ERROR

// cout << pointer << endl;

// pointer = &num_2;

// cout << pointer << endl;









// create pointer constant

// int *const pointer = &num_1;
// cout << * pointer << endl;
// *pointer = num_2;
// cout << * pointer << endl;

//pointer = &num_2; // ERROR



// pointer constant to constant

const int *const pointer = &num_1;





     return 0;
}