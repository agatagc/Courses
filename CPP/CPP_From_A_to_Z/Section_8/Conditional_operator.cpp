#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

// Example 1 
/*
int num; 

cout << "Enter the number: ";
cin >> num;

cout << "The entered number is: " << ((num > 0) ? "Positive" : "Negative");
*/



// Example 2 

int number_of_orders;
string discount;

cout << "Entered the numbers of orders: ";
cin >> number_of_orders;


discount = ((number_of_orders > 15) ? "You get a 15 diccount" : "You don't get a discount");
cout << discount;

return 0;
}