/* Arithmetic operators:

    + addition
    - subtraction
    * multiplication
    / division
    % modulo or remainder (works only with integers)

    +, -, * and / operators are overloaded to work with multiple types such as int, double, etc.
    % only for integer types 

 */

#include <iostream>

using namespace std;


int main() 
{

    int num_1 {200};
    int num_2 {100};

   // cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;

    int result {0};

    result = num_1 + num_2;
    cout << num_1 << " + " << num_2 << " = " << result << endl;


    result = num_1 - num_2;
    cout << num_1 << " - " << num_2 << " = " << result << endl;

    result = num_1 * num_2;
    cout << num_1 << " * " << num_2 << " = " << result << endl;   

    result = num_1 / num_2;
    cout << num_1 << " / " << num_2 << " = " << result << endl;


    result = num_2 / num_1;
    cout << num_1 << " / " << num_2 << " = " << result << endl;


    result = num_1 % num_2;
    cout << num_1 << " % " << num_2 << " = " << result << endl;   


    num_1 = 10;
    num_2 = 3;

    result = num_1 % num_2;
    cout << num_1 << " % " << num_2 << " = " << result << endl;   

    result = num_1 * 10 + num_2;

    cout << 5/10 << endl;

    cout << 5.0/10.0 << endl;

    cout << endl;
    

    return 0;

}