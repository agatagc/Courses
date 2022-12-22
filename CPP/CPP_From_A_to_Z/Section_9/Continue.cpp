#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main() { 

// ta sama zasada dziaania co "break"

// wypisuje 5, 4, 1, 0


int num = 5;

while (num >= 0) 
{
    if (num == 3) 
    {
        num -=2;
        continue;
    }
    cout << num << endl;
    num--;
}


    return 0;
}