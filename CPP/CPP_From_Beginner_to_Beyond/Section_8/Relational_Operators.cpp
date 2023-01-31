/* 

> greater then 
>= greater then or equal to 
< less then
<= less then or equal to 
<=> three-way comparison (C++20)

*/

#include <iostream>

using namespace std;


int main() 
{

    int num_1{}, num_2{};

    cout << boolalpha;
    // cout << "Enter two integers separated by a space: ";
    // cin >> num_1 >> num_2;

    // cout << num_1 << ">" << num_2 << " : " << (num_1 > num_2) << endl;
    // cout << num_1 << ">=" << num_2 << " : " << (num_1 >= num_2) << endl;
    // cout << num_1 << "<" << num_2 << " : " << (num_1 < num_2) << endl;
    // cout << num_1 << "<=" << num_2 << " : " << (num_1 <= num_2) << endl;      


    const int lower {10};
    const int upper {20};
    cout << "\nEnter an integer that is greater then " << lower << " : ";
    cin >> num_1;
    cout << num_1 << " > " << lower << " is " << (num_1 > lower) << endl;

    cout << "\nEnter an integer that is less then or equal to " << upper << " : ";
    cin >> num_1; 
    cout << num_1 << " <= " << upper << " is " << (num_1 <= upper) << endl;   

    return 0;
}