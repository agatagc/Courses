#include <iostream>
#include <cstring>  // for c-style string functions
#include <cctype>   // for character-based functions

using namespace std;


int main() 
{
    char first_name[20] {};
    char lase_name[20] {};
    char full_name[50] {};
    char temp[50] {};

    // cout << first_name;     // Will likely display garbage!

    cout << "Please enter your first name: ";
    cin >> first_name;

    cout << "Please enter your lase name: ";
    cin >> lase_name;
    cout << "----------------------------------" << endl;

    

    return 0;
}