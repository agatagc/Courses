
#include <iostream>

using namespace std;



void dodawanie(int *ptr) 
{
    *ptr += 5;
}
int main() 
{ 

// zwieksza liczbe o 5 


    int num = 5;
    cout << num << endl;
    dodawanie(&num); 
    cout << num << endl;


    int *ptr = &num;
    dodawanie(ptr);
    cout << num << endl;
    


    return 0;
}