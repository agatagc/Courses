
#include <iostream>

using namespace std;

int main() 
{

int num_1 = 5;
int num_2 = 10;

cout << &num_1 << " " << num_1 << endl;
cout << &num_2 << " " << num_2 << endl;

// const int *wskaznik = &num_1;

// // *wskaznik = num_2;  // ERROR

// cout << wskaznik << endl;

// wskaznik = &num_2;

// cout << wskaznik << endl;









// utworzenie stalej wskaznikowej

// int *const wskaznik = &num_1;
// cout << *wskaznik << endl;
// *wskaznik = num_2;
// cout << *wskaznik << endl;

//wskaznik = &num_2;  // ERROR 



// stala wskaznikowa do stalej 

const int *const wskaznik = &num_1;





    return 0;
}