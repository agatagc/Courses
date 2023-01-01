#include <iostream>

using namespace std;

int main()
{

// variable declaration and pointer variable to which we will assign the address of the variable

// int number = 10;
// int *number_ptr = &number;

// cout << *number_ptr << endl;
// *number_ptr = 20;
// cout << *number_ptr << endl;
// cout << number << endl;


float weight_1 = 87.4, weight_2 = 75.8;
float *ptr_weight = &weight_1;

cout << *ptr_weight << endl;
ptr_weight = &weight_2;
cout << *ptr_weight << endl;


     return 0;
}