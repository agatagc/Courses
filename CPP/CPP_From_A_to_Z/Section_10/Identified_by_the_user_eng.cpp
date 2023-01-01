#include <iostream>
using namespace std;
#define PI 3.14
void CircleField()
{
     float radius, field;

     cout << "Enter the radius of the circle: ";
     cin >> radius;
     field = PI * radius * radius;
     cout << "The area of the circle is: " << field << endl;
}

void SquareArea()
{
     float side, field;

     cout << "Enter side length: ";
     cin >> side;
     field = side * side;
     cout << "The area of the square is: " << field << endl;
}

int main() {

CircleField();
SquareArea();



     return 0;
}