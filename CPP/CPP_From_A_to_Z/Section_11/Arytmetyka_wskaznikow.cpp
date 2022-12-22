
#include <iostream>

using namespace std;

int main() 
{

// inkrementacja na wskaznikach

// int num_1 = 4, num_2 = 6;
// int *ptr_1 = nullptr, *ptr_2 = nullptr;

// ptr_1 = &num_1;          // zmienna wskaznikowa ptr 1 przechowuje adres liczby 1
// ptr_2 = &num_2;          // zmienna wskaznikowa ptr 2 przechowuje adres liczby 2  

// cout << *ptr_1 << " " << ptr_1 << " " << ++ptr_1 << endl; 
// cout << *ptr_2 << " " << ptr_2 << " " << ++ptr_2 << endl; 


// porownanie wartosci przypisanych do wskaznikow

int num_1 = 5, num_2 = 10;

int *ptr_1 = &num_1;
int *ptr_2 = &num_1;
int *ptr_3 = &num_2;

cout << (ptr_1 == ptr_2) << endl;
cout << (ptr_1 == ptr_3 ) << endl;

    return 0;
}