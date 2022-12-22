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

cout << "Podaj promien kola: ";
cin >> radius;
cout << "Pole kola o promieniu " << radius << "wynosi: " << Circlefield(radius) << endl;

cout << "Podaj dlugosc boku kwadratu: ";
cin >> side; 
cout << "Pole kwadratu o boku " << side << "wynosi: " << SquareArea(side) << endl;

    return 0;
}