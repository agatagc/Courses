#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main() 
{ 


// w ten sposob dodajemy wskazniki: 

//int *ptr_1;
//double *ptr_2;
//char *ptr_3;
//string *ptr_4;


// wskaznikki nie wskazuja na zaden adres w pamieci (jesli dodamy puste klamry lub zapis nullptr):

//int *ptr_1 = {};
//double *ptr_2 = nullptr;



// deklarowany wskaznik i wypisany wartosc, adres i rozmiar wskaznika

int *ptr_1;
cout << "Wartosc ptr: " << ptr_1 << endl;
cout << "Adres ptr: " << &ptr_1 << endl;
cout << "rozmiar ptr: " << sizeof(*ptr_1) << endl;


    return 0;
}