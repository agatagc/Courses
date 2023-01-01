#include <iostream>
using namespace std;



void Taximeter()
{
     float number_of_kilometers, final_price;

     cout << "Enter the number of kilometers traveled during the trip: ";
     cin >> number_of_kilometers;
     final_price = 7 + (number_of_kilometers - 1) * 3;
     cout << endl << "Amount due for transport: " << final_price << " PLN" << endl;
}

int main() {

cout << "*************************TAXI-CAR*******************" << endl << endl;
cout << " --- PRICE LIST--- " << endl;
cout << "First kilometer: PLN 7\tEach subsequent kilometer: PLN 3" << endl << endl;
Taximeter();
Taximeter();


     return 0;
}