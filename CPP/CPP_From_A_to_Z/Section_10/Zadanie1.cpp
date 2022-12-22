// Napisz program, w którym należy zadeklarować:

// Dwie stałe o nazwie USD i GBP przy pomocy #define 
// określające kurs walut: USD - dolar(0.26 PLN), GBP - funt brytyjski(0.19 PLN)

// Dwie funkcje:

// pierwsza typu void o nazwie PrzelicznikPlnNaUsd, ma przyjmować jeden 
// parametr typu float o dowolnej nazwie określający wartość w PLN oraz ma 
// wypisywać na ekran przeliczoną wartość PLN na USD tak jak pokazano poniżej.

// druga typu void o nazwie PrzelicznikPlnNaGbp, ma przyjmować jeden parametr 
// typu float o dowolnej nazwie określający wartość w PLN oraz ma wypisywać na 
// ekran przeliczoną wartość PLN na GBP tak jak pokazano poniżej.

// W głównej funkcji int main() zadeklaruj zmienną typu float 
// o nazwie pln i przypisz jej wartość 254. Wywołaj funkcje o nazwie 
// PrzelicznikPlnNaUsd z parametrem pln, następnie wywołaj funkcje o nazwie 
// PrzelicznikPlnNaGbp z parametrem pln. Program ma wypisywać wynik tak jak pokazano 
// poniżej.

// Oczekiwany wynik:

// 254 PLN = 66.04 USD
// 254 PLN = 48.26 GBP





#include <iostream>
#define USD 0.26
#define GBP 0.19

using namespace std;
// Miejsce na funkcje

void PrzelicznikPlnNaUsd(float pln)
{
    float wynik = pln * USD;
    cout << pln << " PLN = " << wynik << " USD" << endl;
}

void PrzelicznikPlnNaGbp(float pln)
{
    float wynik = pln * GBP;
    cout << pln << " PLN = " << wynik << " GBP" << endl;    
}

int main_test() {
    
    float pln = 254;
    PrzelicznikPlnNaUsd(pln);
    PrzelicznikPlnNaGbp(pln);
    
    return 0;
}