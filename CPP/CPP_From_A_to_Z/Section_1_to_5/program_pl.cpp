#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

//har name[5] = "Adam";
//cout << name;

//char name[] = "Adam";
//out << name;

//char name[] = {'A', 'd', 'a', 'm', '\0'};
//cout << name;

//char ciag[20] = "Programowanie";
//cout << ciag << endl;
//cout << ciag[3] << endl;

//char ciag1[] = "Programowanie";
//char ciag2[20] = "Programowanie";

//cout << sizeof(ciag1) << endl;
//cout << sizeof(ciag2) << endl;
/*
char fruit1[20], fruit2[20];
cout << "Podaj pierwszy owoc: ";
cin >> fruit1;
cout << "Podaj drugi owoc: ";
cin >> fruit2;

cout << fruit1 << endl << fruit2 << endl;
strcpy(fruit1, fruit2);
cout << fruit1 << endl << fruit2 << endl;

*/ 

//char name[20];
//name = "Tomasz";
//strcpy(name, "Tomasz");
//cout << name;

char dane[40];
strcpy(dane, "Jan");
strcat(dane, "Kowalski");
cout << dane;
return 0;
}