#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() { 

// Petla for oparta na zakresie

// Example 1 

/*
int grades[] = {4, 5, 2, 3, 3};

for (auto grade: grades) 
{
    cout << grade << endl;
}
*/


// Example 2 (wypisze slowo programming z pominieciem litery o)
/*
for (auto string1: "Programming" ) 
{
    if (string1 == 'o') 
    {
        cout << ' ' << endl; 
    } else 
    {
        cout << string1 << endl;
    }
}
*/


// Example 3 (Oblicza srednia ocen podanych w wektorze)


vector<float> grades {4, 4, 4, 5, 5};

float average, sum;

for (auto grade: grades) 
{
    sum += grade; 
}
average = sum / grades.size();   // zawsze da wartosc elementow znajdujacych sie w wektorze
cout << "Average it: " << average;

    return 0;
}