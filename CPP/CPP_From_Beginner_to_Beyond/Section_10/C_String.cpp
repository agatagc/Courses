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

    // cout << "Please enter your first name: ";
    // cin >> first_name;

    // cout << "Please enter your lase name: ";
    // cin >> lase_name;
    // cout << "----------------------------------" << endl;

    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name, " << lase_name << " has " << strlen(lase_name) << " characters" << endl;
    
    // strcpy(full_name, first_name);  // copy first_name to full_name
    // strcat(full_name, " ");         // concatenate full_name and space
    // strcat(full_name, lase_name);   // concatenate lase_name to full_name
    // cout << "Your full name is " << full_name << endl;


    cout << "Enter your full name: ";

    cin.getline(full_name, 50);

    cout << "Your full name is " << full_name << endl;
    cout << "-------------------------------" << endl;

    strcpy(temp, full_name);

    if (strcmp(temp, full_name) == 0)
    {
        cout << temp << " and " << full_name << " are the same" << endl;
    }
    else
    {
        cout << temp << " and " << full_name << " are different" << endl;
    }

    cout << "---------------------------------" << endl;

    for (size_t i{0}; i < strlen(full_name); ++i) 
    {
        if (isalpha(full_name[i]))  // Checks whether the character passed as an argument is an alphabetic character.
        {
            full_name[i] = toupper(full_name[i]);
        }
    }

    cout << "Your full name is " << full_name << endl;

    return 0;
}