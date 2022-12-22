#include <iostream>


using namespace std; 

int dodawanie(int n) 
{
    if (n<= 0)
    {
        return 0; 
    }
    else 
    {
        return (n + dodawanie(n-1));
    }
}



int silnia(int n) 
{
    if (n<= 0) 
    {
        return 1;
    } else 
    {
        return (n * (silnia(n - 1)));
    }
}


int fibonacci (int n) 
{
    if (n <3) 
    {
        return 1;
    } else 
    {
        return (fibonacci(n -2) + fibonacci(n - 1));
    }
}

int main() 
{

// funkcja ktora przejmuje 1 parametr i na podstawie tego parametru bedzie sumowac liczby od 0 do podanej wartosci

//cout << dodawanie(4) << endl;


// silnia 

// cout << silnia(4);


cout << fibonacci(5);
    return 0;
}