#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

// Napisz program, w którym zadeklarujesz wektor typu int o dowolnej nazwie. Przypisz 
// do niego następujące wartości: 7, 4, 9, 2, 5, 4, 4. Wypisz na ekran wszystkie 
// liczby parzyste jedna pod drugą z tego wektora przy pomocy pętli for tak jak pokazano poniżej.



int main() 
{
    vector<int> nums{7, 4, 9, 2, 5, 4, 4};
    
    for (int i = 0; i < nums.capacity(); i++) 
    {
        if (nums[i] % 2 == 0) 
        {
            cout << "List vector index: [" << i << "] value: " <<nums[i] << endl;
        }
    }
    
    return 0;
}