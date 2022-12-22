#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main() 
{ 

// int num_1 = 7;
// int *ptr_num = nullptr;
// ptr_num = &num_1;
// cout << "Wartosc zmiennej num_1: " << num_1 << endl;
// cout << "Adres zmiennej num_1: " << &num_1 << endl;
// cout << "Adres wskaznika ptr_liczba: " << ptr_num << endl;
// cout << "Wartosc wskaznika ptr_num: " << *ptr_num << endl;


int *ptr;
int number;
number = 22;
cout << "Adres zmiennej number: " << &number << endl;
cout << "Wartosc zmiennej number: " << number << endl << endl;

ptr = &number;
cout << "Adres wskaznika ptr: " << ptr << endl;
cout << "zawartosc wskaznika ptr: " << *ptr << endl << endl;


number = 11;
cout << "Adres wskaznika ptr: " << ptr << endl;
cout << "zawartosc wskaznika ptr: " << *ptr << endl << endl;


*ptr = 2;
cout << "Adres wskaznika ptr: " << ptr << endl;
cout << "zawartosc wskaznika ptr: " << *ptr << endl << endl;

    return 0;
}