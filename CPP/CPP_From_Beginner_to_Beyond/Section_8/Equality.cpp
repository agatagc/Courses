#include <iostream>

using namespace std;


int main() 
{

    bool equal_result {false};
    bool not_equal_result {false};

// Example 1 

    // int num_1{}, num_2{};

    // cout << boolalpha;      // wil display true/false instead of 1/0 for booleans

    // cout << "Enter two integers separated by a space: ";
    // cin >> num_1 >> num_2;
    // equal_result = (num_1 == num_2);
    // not_equal_result = (num_1 != num_2);
    // cout << "Comparision result (equals): " << equal_result << endl;
    // cout << "Comparision result (not equals): " << not_equal_result << endl;  


// Example 2 

    // char char_1{}, char_2{};

    // cout << "Enter two characters separated by a space: ";
    // cin >> char_1 >> char_2;
    // equal_result = (char_1 == char_2);
    // not_equal_result = (char_1 != char_2);
    // cout << "Comparision result (equals): " << equal_result << endl;
    // cout << "Comparision result (not equals): " << not_equal_result << endl; 



// Example 3 

    // double double_1{}, double_2{};

    // cout << "Enter two doubles separated by a space: ";
    // cin >> double_1 >> double_2;
    // equal_result = (double_1 == double_2);
    // not_equal_result = (double_1 !=  double_2);
    // cout << "Comparision result (equals): " << equal_result << endl;
    // cout << "Comparision result (not equals): " << not_equal_result << endl; 


// Example 4 

    double double_1{}, double_2{};
    int num_1{}, num_2{};

    cout << "Enter an integer and double separated by a space: ";
    cin >> num_1 >> double_2;
    equal_result = (num_1 == double_2);
    not_equal_result = (num_1 !=  double_2);
    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << not_equal_result << endl; 
    
    return 0;
}  