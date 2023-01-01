#include <iostream>
using namespace std;

float Circlefield(float radius)
{
     float field;

     field = 3.14 * radius * radius;
     return field;
}

float SquareArea(float side)
{
     float field;

     field = side * side;
     return field;
}



int main() {

float radius, side;

cout << "Enter the radius of the circle: ";
cin >> radius;
cout << "The area of a circle with radius " << radius << "is: " << Circlefield(radius) << endl;

cout << "Enter the side length of the square: ";
cin >> side;
cout << "The area of a square with side " << side << "is: " << SquareArea(side) << endl;

     return 0;
}