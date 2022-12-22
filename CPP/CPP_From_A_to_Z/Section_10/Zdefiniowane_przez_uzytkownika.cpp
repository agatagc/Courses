#include <iostream>
using namespace std;
#define PI 3.14
void CircleField() 
{
    float radius, field;

    cout << "Podaj promien kola: ";
    cin >> radius;
    field = PI * radius * radius;
    cout << "Pole kola wynosi: " << field << endl;
}

void SquareArea() 
{
    float side, field;

    cout << "Podaj dlugosc boku: ";
    cin >> side;
    field = side * side;
    cout << "Pole kwadratu wynosi: " << field << endl;
}

int main() { 

CircleField();
SquareArea();



    return 0;
}