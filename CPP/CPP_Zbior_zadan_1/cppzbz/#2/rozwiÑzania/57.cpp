#include <iostream> 
#include <ctime> 
#include <vector> 
using namespace std;
typedef long long int L;
typedef unsigned long long int UL;
////////////////////////////////////////////////////// 
struct Punkt {
 int x;
 int y;
};
bool na_linii(Punkt a, Punkt b, Punkt c) {
 // (y−yA)(xB−xA)−(yB−yA)(x−xA)=0 // wzór funkcji dla dwóch punktów. Punkt c spełnia poniższą 
 // równość, gdy leży na prostej utworzonej z punktów a i b. 
 return ((c.y - a.y) * (b.x - a.x) - (b.y - a.y) * (c.x - a.x) == 0);
}
bool zad57(Punkt a, Punkt b, Punkt c) { 
 // Testujemy, czy punkty a i b to linia, a punkt c leży na tej linii. Kombinacje a, c, b oraz b, c, a nie 
 // są konieczne, zwracają jednak uwagę na fakt, że prostą mogą tworzyć inne dwa punkty. 
 return (na_linii(a, b, c) or na_linii(a, c, b) or na_linii(b, c, a));
}
int main() {
 setlocale(LC_ALL, ""); srand(time(0));
 cout << zad57 ({ 0,0 }, { 10,10 }, { 5,5 }); // wszystkie leżą na prostej x=y (1)
 cout << zad57 ({ 0,0 }, { 10,10 }, { 1,-1 }); // nie leżą (0)
 cout << zad57 ({ 0,0 }, { 10,10 }, { -1,-1 }); // leżą (1)
 cout << zad57 ({ 0,0 }, { 0,5 }, { 2,0 }); // nie leżą (0)
 cout << zad57 ({ 0,0 }, { 0,5 }, { 0,2 }); // leżą (1) (uwaga: te punkty tworzą pionową
 // linię, a podany wzór redukuje się do x=0)
}