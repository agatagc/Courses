#include <iostream>
#include <iomanip>

using namespace std; 


void SredniaCena(float ceny_produktow[], int ilosc_elementow) 
{
    float suma, srednia;

    for (int i = 0; i < ilosc_elementow; i++) 
    {
        suma += ceny_produktow[i];
    }
    srednia = suma / ilosc_elementow;
    cout << "Srednia cena to: " << fixed << setprecision(2) << srednia << endl;
}
int main() 
{

float ceny_produktow[] = {45.30, 69.99, 64.99, 48.49};
int ilosc_elementow = sizeof(ceny_produktow) / 4;
SredniaCena(ceny_produktow, ilosc_elementow);

    return 0;
}