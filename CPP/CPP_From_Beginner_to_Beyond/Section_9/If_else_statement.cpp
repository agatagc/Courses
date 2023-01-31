#include <iostream>

using namespace std;


int main() 
{
    int num {};
    const int target {10};

    cout << "Enter a number and I'll compare it to " << target << ": ";
    cin >> num;

    if (num  >= target) {
        cout << "\n==============================================" << endl;
        cout << num << " is greater then or equal to " << target << endl;
        int diff {num - target};
        cout << num << " is " << diff << " greater then " << target << endl;
    } else {
        cout << "\n==============================================" << endl;
        cout << num << " is less then " << target << endl;
        int diff {target - num};
        cout << num << " is " << diff << " less then " << target << endl;
    } 
    cout << endl;
    
    return 0;
}