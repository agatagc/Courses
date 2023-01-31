#include <iostream> 
#include <vector> 
using namespace std;
int main() {
 setlocale(LC_ALL, "");
 // wzór to cyklicznie powtarzający się ciąg 3, 1, 2, 1 itd. 
 vector<int> cykl = { 3,1,2,1 };
 size_t elementy = 1;
 while (elementy <= 100) {
 cout << cykl[(elementy++ - 1) % 4] << " ";
 // cykl[0], cykl[1], cykl[2], cykl[3], cykl[0] i tak 100 razy 
 }
}
/* Uwaga! Jak interpretować część (elementy++ - 1)? 
Komputer spróbuje obliczyć różnicę (elementy++) - (1). 
W tym celu musi obliczyć wartość po lewej i prawej stronie znaku odejmowania. 
Wyrażenie elementy++ najpierw zwraca wartość elementy. 
Wynosi ona 1, więc do różnicy z lewej strony zostanie wstawione 1. 
Zatem operacja odejmowania ma postać 1-1, czyli 0. 
Operator ++ po prawej stronie oczywiście zadziała, ale już po obliczeniu różnicy. 
Spróbuj wyrażenia (++elementy – 1) i sprawdź, co się stanie. 
Uwaga! Dla czytelności można było napisać to w dwóch liniach (jak poniżej), czasami wybieramy 
 bardziej skondensowany kod, a dobra znajomość kolejności operacji nie psuje czytelności. 
---- postać czytelniejsza ---- 
cout << cykl[(elementy-1)%4] << " "; 
elementy++; 
---- 
*/ 