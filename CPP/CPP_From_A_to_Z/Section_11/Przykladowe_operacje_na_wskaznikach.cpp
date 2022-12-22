

#include <iostream>

using namespace std;

int main() 
{ 

// deklaracja zmiennej oraz zmienna wskaznikowa do ktorej przypiszemy adres zmiennej

// int number = 10;
// int *number_ptr = &number;

// cout << *number_ptr << endl;
// *number_ptr = 20;
// cout << *number_ptr << endl;
// cout << number << endl;


float waga_1 = 87.4, waga_2 = 75.8;
float *waga_ptr = &waga_1;

cout << *waga_ptr << endl;
waga_ptr = &waga_2;
cout << *waga_ptr << endl;


    return 0;
}