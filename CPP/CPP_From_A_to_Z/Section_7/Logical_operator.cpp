#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
/* 
int num_1, num_2;
bool result;

cout << "Enter two numbers: ";
cin >> num_1 >> num_2;

result = ((num_1 % 2) == 0) && ((num_2 % 2) == 0);
cout << " Expression result: " << result; 

*/


const int pin_1 = 4556, pin_2 = 5545; 
int pin;
bool access;
cout << "Pass the pin to the stairwell: ";
cin >> pin;

access = (pin == pin_1) || (pin == pin_2);
cout << "Access to the staircase: " << access;


return 0;
}
