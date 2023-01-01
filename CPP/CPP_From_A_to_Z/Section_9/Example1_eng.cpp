#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

// Write a program to declare an int vector with any name. Assign
// the following values to it: 7, 4, 9, 2, 5, 4, 4. Display all
// the even numbers one after the other from this vector using a for loop as shown below.



int main()
{
     vector<int> nums{7, 4, 9, 2, 5, 4, 4};
    
     for (int i = 0; i < nums.capacity(); i++)
     {
         if (nums[i] % 2 == 0)
         {
             cout << "List vector index: [" << i << "] value: " << nums[i] << endl;
         }
     }
    
     return 0;
}