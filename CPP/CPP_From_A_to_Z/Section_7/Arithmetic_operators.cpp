#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

 float num_1 = 10, num_2 = 5, result;

// ADDITION

 result = num_1 + num_2;
 cout << num_1 << " + " << num_2 << " = " << result << endl;

 // SUBTRACTION

 result = num_1 - num_2;
 cout << num_1 << " - " << num_2 << " = " << result << endl;

 // MULTIPLICATION

 result = num_1 * num_2;
 cout << num_1 << " * " << num_2 << " = " << result << endl;

 // DIVISION

 result = num_1 / num_2;
 cout << num_1 << " / " << num_2 << " = " << result << endl;


 
// MODULO

int num_3 = 7, num_4 = 4, result_1;

result_1 = num_3 % num_4; 

cout << num_3 << " % " << num_4 << " = " << result_1 << endl;


// EXAMPLE 1

    float kw, km;
    cout << "Enter the power of the car in kW: ";
    cin >> kw;

    km = kw * 1.36;
    cout << "Engine power in kM: " << km;


return 0;
}