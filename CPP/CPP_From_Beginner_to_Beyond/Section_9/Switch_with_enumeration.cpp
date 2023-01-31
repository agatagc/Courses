#include <iostream>


using namespace std;


int main() 
{
     
    enum Direction {left, right, up, down}; // creating enum

    Direction heading {left};   // declarating variable of type Direction

    switch (heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
        default:
            cout << "OK" << endl;
    }

cout << endl;
    return 0;
}