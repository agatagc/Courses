
#include <iostream>

using namespace std;

int main() 
{

    string name = "Tomasz";
    string &ref = name;

    cout << name << endl;
    cout << ref << endl << endl;


    name = "Kuba";
    cout << name << endl;
    cout << ref << endl << endl; 


    ref = "Mateusz";
       cout << name << endl;
    cout << ref << endl << endl; 
    return 0; 
}