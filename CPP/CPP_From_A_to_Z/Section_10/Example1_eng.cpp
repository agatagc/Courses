// Write a program to declare:

// Two constants named USD and GBP using #define
// determining the exchange rate: USD - dollar (PLN 0.26), GBP - British pound (PLN 0.19)

// Two functions:

// the first void type, named ConverterPlnToUsd, is to accept one
// float type parameter with any name specifying the value in PLN and ma
// print the converted PLN to USD value to the screen as shown below.

// the second one of the void type, called PrzeliczcznikPlnNaGbp, is to accept one parameter
// a float of any name specifying the value in PLN and to print to
// screen the converted PLN value to GBP as shown below.

// In the main function int main(), declare a float variable
// named pln and assign it the value 254. Call the function named
// PlnToUsd converter with parameter pln, then call the function named
// Converter PlnToGbp with parameter pln. The program should output the result as shown
// below.

// Expected result:

// PLN 254 = USD 66.04
// PLN 254 = GBP 48.26





#include <iostream>
#define USD 0.26
#define GBP 0.19

using namespace std;
// Room for functions

void ConverterPlnToUsd(float pln)
{
     float result = pln * USD;
     cout << pln << " PLN = " << result << " USD" << endl;
}

void ConverterPlnToGbp (float pln)
{
     float result = pln * GBP;
     cout << pln << " PLN = " << result << " GBP" << endl;
}

int main_test() {
    
     float pln = 254;
     ConverterPlnToUsd(pln);
     ConverterPlnToGbp(pln);
    
     return 0;
}