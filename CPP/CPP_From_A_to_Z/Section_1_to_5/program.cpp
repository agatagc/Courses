#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

//har name[5] = "Adam";
// cout << name;

//char name[] = "Adam";
//out << name;

//char name[] = {'A', 'd', 'a', 'm', '\0'};
// cout << name;

//char text[20] = "Programming";
// cout << text << endl;
// cout << text[3] << endl;

//char text1[] = "Programming";
//char text2[20] = "Programming";

// cout << sizeof(text1) << endl;
// cout << sizeof(text2) << endl;
/*
char fruit1[20], fruit2[20];
cout << "Enter first fruit: ";
cin >> fruit1;
cout << "Enter second fruit: ";
cin >> fruit2;

cout << fruit1 << endl << fruit2 << endl;
strcpy(fruit1, fruit2);
cout << fruit1 << endl << fruit2 << endl;

*/

// char name[20];
// name = "Thomas";
// strcpy(name, "Thomas");
// cout << name;

char data[40];
strcpy(data, "John");
strcat(data, "Smith");
cout << data;
return 0;
}