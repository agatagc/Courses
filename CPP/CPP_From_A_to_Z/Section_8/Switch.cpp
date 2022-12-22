#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

// Example 1 

/*
int num;

cout << "Enter a number from 1 to 3: ";
cin >> num;

switch (num) {
    case 1:
      cout << "one";
      break;
    case 2:
      cout << "two";
      break;
    case 3:
      cout << "three";
      break;
    default:
      cout << "You entered the wrong value!";
}




// Example 2 

float num_1, num_2;
char sign;

cout << "-----Calculator-----";
cout << "Enter a math operation (e.g. 4 * 3): ";
cin >> num_1 >> sign >> num_2;

switch (sign) {
    case '+':
        cout << num_1 << " + " << num_2 << " = " << num_1 + num_2;
        break;
    case '-':
        cout << num_1 << " - " << num_2 << " = " << num_1 - num_2;
        break;
    case '*':
        cout << num_1 << " * " << num_2 << " = " << num_1 * num_2;
        break;
    case '/':
        cout << num_1 << " / " << num_2 << " = " << num_1 / num_2;
        break;
    default:
        cout << "You entered a wrong sign";
    
}*/



// Example 3 

int dish_number, drink_number;

cout << "--------MENU--------" << endl;
cout << "Dishes: \t\t Drinks:" << endl;
cout << "1. Pizza\t 1. Water" << endl;
cout << "2. Burger\t 2. Lemonade" << endl;
cout << "3. Carbonara\t 3. Cola" << endl;

cout << "Enter the number of dish and drink you want to order: " << endl;
cout << "\tDish: "; 
cin >> dish_number;
cout << "\tDrink: ";
cin >> drink_number;

cout << endl << "Your order is: " << endl;
cout << "\tDish: ";

switch (dish_number) {
  case 1:
      cout << "Pizza" << endl; 
      break;
  case 2:
      cout << "Burger" << endl;
      break;
  case 3: 
      cout << " Carbonara" << endl;
      break; 
  default: 
      cout << "You chose nothing" << endl;
}

cout << "\tDrinks: ";

switch (drink_number) {
  case 1:
      cout << "Water" << endl; 
      break;
  case 2:
      cout << "Lemonade" << endl;
      break;
  case 3: 
      cout << " Cola" << endl;
      break; 
  default: 
      cout << "You chose nothing" << endl;
}
return 0; 
}