#include <iostream>


using namespace std;

int addition(int n)
{
     if (n<= 0)
     {
         return 0;
     }
     else
     {
         return(n + addition(n-1));
     }
}



int factorial(int n)
{
     if (n<= 0)
     {
         return 1;
     } else
     {
         return (n * (factorial(n - 1)));
     }
}


int fibonacci (int n)
{
     if(n<3)
     {
         return 1;
     } else
     {
         return (fibonacci(n - 2) + fibonacci(n - 1));
     }
}

int main()
{

// a function that takes 1 parameter and, based on this parameter, will sum the numbers from 0 to the given value

// cout << add(4) << endl;


// strong

// cout << factorial(4);


cout << fibonacci(5);
     return 0;
}