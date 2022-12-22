#include <iostream>
#include <iomanip>

using namespace std; 


void print(int number) 
{
    cout << number << endl;
}

void print(float number)
{
    cout << fixed << setprecision(2) << number << endl;
}

void print(string ciag) 
{
    cout << ciag << endl;
}

void print(string ciag_1, string ciag_2) 
{
    cout << ciag_1 << " " << ciag_2 << endl;
}

void print(int num_1, int num_2) 
{
    cout << num_1 << " " << num_2 << endl;
}

void print(float num_1, float num_2) 
{
    cout << num_1 + num_2 << endl;
}

int main() 
{

//print(4);
//print(7.0F);
//print("Programowanie");


print("Programowanie", "C++");
print(2, 5);
print(3.0F, 8.0F);
    return 0;
}