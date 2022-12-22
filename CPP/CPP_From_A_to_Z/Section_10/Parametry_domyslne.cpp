#include <iostream>
#include <iomanip> //do okreslenia miejsc po przecinku

using namespace std; 


float ObliczaniePodatku(float cena_towaru, float podatek = 0.23) 
{
     return (cena_towaru * podatek);
} 
void ObliczanieKosztowSpalania(float srednie_spalanie, float cena_benzyny = 4.59) 
{
     cout << "Cena benzyny: " << fixed << setprecision(2) << cena_benzyny << " PLN" << endl;   // fixed, pozniej setprecision do okreslania ilosci miejsc po przecinku
     cout << "Srednie spalanie: " << srednie_spalanie << " litrow" << endl;
     cout << "Koszt przejechania 100 km: " << (srednie_spalanie * cena_benzyny) << " PLN" << endl;
}




void StopnieWojskowe(string nazwisko, string stopien = "Szeregowy") 
{
     cout << "Nezwisko: " << nazwisko + "\t" << "Stopien: " << stopien << endl;
}


int main() 
{

// funkcja obliczajaca podatek

     //cout << "Podatek 23%: " << ObliczaniePodatku(350) << " PLN" << endl;
     //cout << "Podatek 9%: "  << ObliczaniePodatku(250, 0.09) << " PLN" << endl;  // tak jakbysmy przypisali 9 % do zmiennej (zmienia sie jak podamy jeszcze raz)




// koszty spalania paliwa na 100 km 

//ObliczanieKosztowSpalania(8.3);
//ObliczanieKosztowSpalania(8.3, 4.99);


// wyswietla stopnie wojskowe

StopnieWojskowe("Kowalski");
StopnieWojskowe("Krakowiak", "Starszy szeregowy");
StopnieWojskowe("Nowakowski", "Oficer");


     return 0;
}