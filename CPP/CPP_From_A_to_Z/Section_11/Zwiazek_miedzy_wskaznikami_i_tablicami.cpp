

#include <iostream>

using namespace std;

int main() 
{

// odniesienie do pierwszego elementu z tablicy 

// int number[] = {23, 34, 23};

// cout << number[0] << endl;
// cout << number << endl;
// cout << *number << endl;

// int *number_ptr = number;
// cout << number_ptr << endl;
// cout << *number_ptr << endl; 


float number[] = {42, 50, 43, 21};

float *number_ptr = number;
cout << number_ptr << " " << *number_ptr << endl;
cout << (number_ptr + 1) << " " << *(number_ptr + 1) << endl;
cout << (number_ptr + 2) << " " << *(number_ptr + 2) << endl;
cout << (number_ptr + 3) << " " << *(number_ptr + 3) << endl;


    return 0;
}