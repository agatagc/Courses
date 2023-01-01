#include <iostream>

using namespace std;



void addition(int *ptr)
{
     *ptr += 5;
}
int main()
{

// increases the number by 5


     int num = 5;
     cout << num << endl;
     addition(&num);
     cout << num << endl;


     int *ptr = &num;
     addition(ptr);
     cout << num << endl;
    


     return 0;
}