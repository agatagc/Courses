#include <iostream>

using namespace std;

int main()
{

// int *ptr = nullptr;
// cout << ptr << endl;
// ptr = new int;
// cout << ptr << endl;


// float *ptr = new float[3];

// cout << &ptr[0] << endl;
// cout << &ptr[1] << endl;
// cout << &ptr[2] << endl;


string *name = new string[3];
name[0] = "Tom";
name[1] = "Matthew";
name[2] = "Patrick";

cout << &name[0] << " " << name[0] << endl;
cout << &name[1] << " " << name[1] << endl;
cout << &name[2] << " " << name[2] << endl;

delete[] name;


     return 0;
}