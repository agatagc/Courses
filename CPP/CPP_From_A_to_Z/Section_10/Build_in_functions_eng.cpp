#include <iostream>
#include <math.h>

using namespace std;

int main()
{
 
// returns the absolute value of the given number (will print the number 5, not -5)

int x = -5;
cout << abs(x);



// returns the square root of the given number

int y = 9;
cout << sqrt(y);




// return the cube root

int z = 27;
cout << cbrt(z);



// round numbers up and down


float d = 3.13, c = 5.23;

cout << ceil(d) << " " << ceil(c) << endl;
cout << floor(d) << " " << floor(c) << endl;



// return the difference between two numbers (will print the number 4 )

int f = 10, g = 6;
cout << fdim(f, g);





// return greater value and less value

int h = 14, j = 17;
cout << fmax(h, j) << endl; // will print 17
cout << fmin(h, j) << endl; // will print 14



// function to exponentiate


 int k = 3, l = 2;

 cout << pow(k, l); // k - corresponds to the number, while l - corresponds to the power

     return 0;
}