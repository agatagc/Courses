#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() {

// range-based for loop

//Examples 1

/*
int grades[] = {4, 5, 2, 3, 3};

for (auto grade: grades)
{
     cout << grade << endl;
}
*/


// Example 2 (prints the word programming omitting the letter o)
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


// Example 3 (Calculates the average of the grades given in the vector)


vector<float> grades {4, 4, 4, 5, 5};

float average, sum;

for (auto grade: grades)
{
     sum += grade;
}
average = sum / grades.size(); // will always return the value of the elements in the vector
cout << "Average it: " << average;

     return 0;
}