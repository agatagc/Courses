
#include <iostream>
#include <iomanip> //to specify decimal places

using namespace std;


float CalculateTax(float item_price, float tax = 0.23)
{
      return (goods_price * tax);
}
void CalculatingCombustionCosts(float average_consumption, float gasoline_price = 4.59)
{
      cout << "Petrol price: " << fixed << setprecision(2) << petrol_price << " PLN" << endl; // fixed, then setprecision to specify the number of decimal places
      cout << "Average fuel consumption: " << average fuel consumption << " liters" << endl;
      cout << "The cost of driving 100 km: " << (average_consumption * gasoline_price) << " PLN" << endl;
}




void MilitaryRanks(string name, string rank = "Private")
{
      cout << "Name: " << name + "\t" << "Grade: " << rank << endl;
}


int main()
{

// tax calculation function

      // cout << "23% tax: " << Tax Calculation(350) << " PLN" << endl;
      // cout << "9% tax: " << Tax Calculation(250, 0.09) << " PLN" << endl; // as if we assigned 9% to the variable (it changes when we specify it again)




// fuel consumption costs per 100 km

//CalculatingCombustionCost(8.3);
//CalculateCombustionCost(8.3, 4.99);


// display military ranks

MilitaryRanks("Smith");
MilitaryRanks("Krakowiak", "Private");
MilitaryRanks("Nowakowski", "Officer");


    return 0;

}