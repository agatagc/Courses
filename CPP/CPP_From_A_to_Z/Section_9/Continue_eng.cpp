#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main() { 



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