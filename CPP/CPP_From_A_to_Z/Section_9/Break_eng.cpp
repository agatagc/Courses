#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <Windows.h>
using namespace std;

int main() { 




vector<int> nums;

int num;

cout << "Enter 5 numbers: ";
for (int i = 1; i<= 5; i++) 
{
    cin >> num;
    nums.push_back(num);
    if(num == 4) 
    {
        break;
    }
}



  return 0;  
}