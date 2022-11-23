#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

//sposob 1

//sring text = "Ala ma kota";
//cout << text << endl;

// sposob 2

//string name = "Agata", last_name = "Siudem", user_data;
//user_data = name + " " + last_name;
//cout << user_data << endl;  

//sposob 3 

//int num_1 = 5, num_2 = 10, result_1;

//string ciag_1 = "5", ciag_2 = "10", result_2;

//result_1 = num_1 + num_2;
//result_2 = ciag_1 + ciag_2;

//cout << result_1 << endl << result_2 << endl;


//sposob 4 

//string text = "Jezy lezy na wiezy";
//cout << text.size();

//sprawdza ile ma znakow  

//sposob 5

//string text = "Jezy lezy na wiezy";
//cout << text[3] << endl;
//cout << text;

//sposob 6

//string name, last_name;
//cout << "Podaj imie: ";
//cin >> name;
//cout << "Podaj nazwisko: ";
//cin >> last_name;
//cout << "Podane imie: " + name + " " + last_name; 
//cout << "Podane imie: " << name << " " << last_name; 

//sposob 6 

//string s(15, '*');
//cout << s;

//Przyklad 7
/*
string s1 = "C";
string s2 = "C++";
string s3 = "Phyton";
string s4 = "Java";

cout << (s1 == "C") << endl;
cout << (s1 == s2) << endl;
cout << (s1 != s3) << endl; 
cout << (s1 < s4) << endl;
cout << (s1 > s4) << endl;
*/

// przyklad 8

//string s = "Programowanie w C++";
//cout << s.substr(0, 13) << endl;
//cout << s.substr(16, 18) << endl;


string s;

getline(cin, s, '$');
cout << s << endl;

return 0;
}