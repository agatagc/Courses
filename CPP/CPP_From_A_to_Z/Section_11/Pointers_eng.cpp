#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main()
{


// this is how we add pointers:

//int *ptr_1;
//double *ptr_2;
//char *ptr_3;
//string *ptr_4;


// pointers do not point to any memory address (if we add empty braces or write nullptr):

//int *ptr_1 = {};
//double *ptr_2 = nullptr;



// declared pointer and printed value, address and size of the pointer

int *ptr_1;
cout << "Value ptr: " << ptr_1 << endl;
cout << "Address ptr: " << &ptr_1 << endl;
cout << "size of ptr: " << sizeof(*ptr_1) << endl;


     return 0;
}