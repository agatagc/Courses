#include <iostream>
using namespace std;



void Taxometr() 
{
    float number_of_kilometers, final_price;

    cout << "Podaj ilosc km przebytych podczas trasy: ";
    cin >> number_of_kilometers;
    final_price = 7 + (number_of_kilometers - 1) * 3;
    cout << endl << "Kwota nalezna za transport: " << final_price << " PLN" << endl;
}

int main() { 

cout << "*******************TAXI-CAR*******************" << endl << endl;
cout << "               ---CENNIK---               " << endl;
cout << "Pierwszy kilometr: 7 PLN\tKazdy kolejny: 3 PLN" << endl << endl;
Taxometr();
Taxometr();


    return 0;
}