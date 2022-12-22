#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

 // IF

/*
 int num; 
 cout << "Enter the number greater then 10: ";
 cin >> num;

 if (num > 10) {
    cout << " Can you entered the correct number.";
 }
 
 

string password;
cout << "Enter your password: ";
cin >> password;

if (password == "qwerty123") {
    cout << "Access was granted." << endl;
}


// IF...else

// Example 1

const int main_pin = 6675;
int input_pin;

cout << "------------BANK------------" << endl;
cout << " Enter a 4-digit pin: ";
cin >> input_pin;

if(input_pin == main_pin) {
    cout << "PIN correct";
} else {
    cout << "PIN incorrect";
}
 
// Example 2

float body_temperature, permissible_temperature = 37.2;

cout << "-------TEST-COVID_19-------" << endl; 
cout << "Enter body temperature: "; 
cin >> body_temperature;

cout << "Result of the test: ";
if(body_temperature <= permissible_temperature) {
    cout << "No suspicion of infection" << endl;
} else {
    cout << "Suspected infection" << endl;
}


// If...else if 

// Example 1
int num;

cout << "Enter any intiger: ";
cin >> num;

if (num > 0) {
    cout << "The given number is positive.";
} else if (num < 0) {
    cout << "The given number is negative.";
} else {
    cout << "the given number is 0.";
}
*/
// Example 2 

double weight, height, bmi;
cout << "-----BMI-----" << endl;
cout << "Enter the weight(kg): ";
cin >> weight;
cout << "Enter the height(m): ";
cin >> height;

bmi = weight / (height * height);

if (bmi < 18.49) {
    cout << "Underweight";
} else if (bmi >= 18.5 && bmi < 24.99) {
    cout << "Normal weight";
} else if (bmi >= 25 && bmi < 29.99) {
    cout << "Overweight";
} else {
    cout << "Obese";
}

return 0; 
}