#include <iostream>

using namespace std;

/*
Mixed Type Expressions 

Ask the user to enter 3 integers 
Calculate the sum of the integers then 
calculate the average of the 3 integers 

Display the 3 integers entered
the sum of the 3 integers and
the average of the 3 integers.

*/


int main() 
{
    int total {};
    int num_1 {}, num_2 {}, num_3 {};
    const int count {3};

    cout << "Enter 3 integer separated by spaces: "; 
    cin >> num_1 >> num_2 >> num_3;

    total = num_1 + num_2 + num_3;

    double average {0.0};

    average = static_cast<double>(total) / count; // i have double not int

    cout << "The 3 numbers were: " << num_1 << ", " << num_2 << ", " << num_3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;



    cout << endl;  
    return 0; 
}