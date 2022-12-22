#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main() { 

// Example 1 (Wyswietla liczby od 1 do 5)

/*
int num = 1;

do 
{
    cout << num << endl;
    num++;    
} while (num <= 5);
*/




// Example 2 (wypisze wszystkie liczby podzielne przez 3 z zakresu liczb od 1 do 15)

/*
int num_1 = 1;

do {
    if (num_1 % 3 == 0) 
    {
        cout << num_1 << endl;
    }
    num_1++;
} while (num_1 <= 15);
*/


// Example 3 ( symulacja menu w grze komputerowej )

char check_mark;

do 
{
    cout << "-----GAME-----" << endl;
    cout << "1. New game" << endl;
    cout << "2. Reasume the game" << endl;
    cout << "3. Options" << endl;
    cout << "4. Exit" << endl;
    cout << "5. Enter the option number: " << endl;
    cin >> check_mark;

    if (check_mark == '1') 
    {
        cout << "You have selected a new game" << endl;
    } else if (check_mark == '2')  
    {
        cout << "You chose to restart the game" << endl;
    } else if (check_mark == '3') 
    {
        cout << "You have chosen options" << endl; 
    }else if (check_mark == '4') 
    {
        cout << "exit..." << endl;
    }else 
    {
        cout << "There is no such selection" << endl;
    }

} while (check_mark != '4');

return 0;
}