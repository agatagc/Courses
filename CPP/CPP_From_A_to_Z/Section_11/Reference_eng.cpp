#include <iostream>

using namespace std;

int main()
{

     string name = "Thomas";
     string &ref = name;

     cout << name << endl;
     cout << ref << endl << endl;


     name = "Cuba";
     cout << name << endl;
     cout << ref << endl << endl;


     ref = "Matthew";
        cout << name << endl;
     cout << ref << endl << endl;
     return 0;
}