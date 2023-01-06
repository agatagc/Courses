

#include <iostream>

using namespace std;

int main() 
{

//This program will calculate the area of room in square feet




    cout << "Enter the width of the room: ";
    int room_width {0};     // szerokosc pokoju    
    cin >> room_width; 
 

    cout << "Enter the lenght of the room: ";
    int room_lenght {0};    // dlugosc pokoju    
    cin >> room_lenght;

    cout << "The area of the room is " << room_width * room_lenght << " squere feet" << endl;

    return 0;
}