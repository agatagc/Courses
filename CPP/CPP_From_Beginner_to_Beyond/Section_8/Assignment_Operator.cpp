#include <iostream>


using namespace std;



int main() 
{

    int num_1 {10};
    int num_2 {20};

    num_1 = num_2 = 1000;
 
    cout << "num_1 is " << num_1 << endl;
    cout << "num_2 is " << num_2 << endl;   

    cout << endl;


    return 0;

}