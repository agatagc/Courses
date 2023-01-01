#include <iostream>

using namespace std;

int main()
{

// increment on pointers


// int num_1 = 4, num_2 = 6;
// int *ptr_1 = nullptr, *ptr_2 = nullptr;

// ptr_1 = &num_1; // the pointer variable ptr 1 holds the address of number 1
// ptr_2 = &num_2; // pointer variable ptr 2 holds the address of number 2

// cout << *ptr_1 << " " << ptr_1 << " " << ++ptr_1 << endl;
// cout << *ptr_2 << " " << ptr_2 << " " << ++ptr_2 << endl;






// compare the values assigned to the pointers

int num_1 = 5, num_2 = 10;

int *ptr_1 = &num_1;
int *ptr_2 = &num_1;
int *ptr_3 = &num_2;

cout << (ptr_1 == ptr_2) << endl;
cout << (ptr_1 == ptr_3 ) << endl;

     return 0;
}