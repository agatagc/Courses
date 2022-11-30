#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {

int bin_1, bin_2, result;

bin_1 = 13;  // 00001101
bin_2 = 7;   // 00000111

// AND

result = bin_1 & bin_2;   // 00000101
cout << result << endl;

// OR

result = bin_1 | bin_2;  // 00001111
cout << result << endl; 

// << LEFT 

result = (bin_1 << 1);  //  00011010
cout << result << endl; 

return 0;
}   