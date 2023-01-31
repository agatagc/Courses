#include <iostream>

using namespace std;


int main() 
{

    for (int num_1 {1}; num_1 <= 10; ++num_1){
        for (int num_2 {1}; num_2 <= 10; ++num_2) {
            cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;
        }
        cout << "----------------------" << endl;
    }
    return 0;
}