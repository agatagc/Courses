#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main() { 


// Example 1 (wypisywanie liczb od 1 do 5)

/*
int i = 1;
while (i<= 5) 
{
    cout << i << endl;
    i++;                           // tu zawsze dodajemy inkrementacje w while
}

*/

// Example 2 (wypisze liczby nieparzyste od 5 do 15)

/*
int l = 5;
while (l <= 15) 
{
    if (l % 2 == 1) 
    {
        cout << l << endl;
    }
    l++;
}
*/

// Example 3 (odliczanie do startu rakiety)

int odliczanie = 5;

while (odliczanie >= 0) 
{
    cout << odliczanie << endl;
    Sleep(1000);                                    // wstrzymuje dzialanie programu na okreslona wartosc (zapis 1000 program wstrzyma sie na 1s)
    odliczanie--;
}
cout << "START!!!";

return 0;
}   