#include <iostream>


using namespace std;


int main() 
{
    // int num {};

    // cout << "Enter an integer: ";
    // cin >> num;

    // if (num % 2 == 0)
    //     cout << num << " is even" << endl;
    // else
    //     cout << num << " is odd" << endl; // the same
    
    // cout << num << " is " << ((num %2 == 0) ? "even" : "odd") << endl; // the same 



    int num_1 {}, num_2 {};

    cout << "Enter two integers separated by a space: ";
    cin >> num_1 >> num_2;

    if (num_1 != num_2) {
        cout << "Largest: " << ((num_1 > num_2) ? num_1 : num_2) << endl;
        cout << "Smallest: " << ((num_1 < num_2) ? num_1 : num_2) << endl;
        
    } else {
        cout << "The numbers are the same" << endl;
    }


    return 0;
}