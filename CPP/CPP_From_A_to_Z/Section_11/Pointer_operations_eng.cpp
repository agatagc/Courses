#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main()
{

// int num_1 = 7;
// int *ptr_num = nullptr;
// ptr_num = &num_1;
// cout << "Value of variable num_1: " << num_1 << endl;
// cout << "Variable address num_1: " << &num_1 << endl;
// cout << "The pointer address ptr_number: " << ptr_num << endl;
// cout << "Ptr_num pointer value: " << *ptr_num << endl;


int *ptr;
int number;
number = 22;
cout << "Variable address number: " << &number << endl;
cout << "Variable value number: " << number << endl << endl;

ptr = &number;
cout << "The address of ptr pointer: " << ptr << endl;
cout << "content of pointer ptr: " << *ptr << endl << endl;


number = 11;
cout << "The address of ptr pointer: " << ptr << endl;
cout << "content of pointer ptr: " << *ptr << endl << endl;


*ptr = 2;
cout << "The address of ptr pointer: " << ptr << endl;
cout << "content of pointer ptr: " << *ptr << endl << endl;

     return 0;
}