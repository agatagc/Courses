#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {



int num_1 = 8, num_2 = 3, result = 0;

result += (num_1 + num_2); 
cout << result << endl;

result -= num_1;
//result = result - num_1;  ----> the same like result -= num_1
cout << result << endl; 

result *= num_2;
cout << result << endl;

result %= num_2;
cout << result << endl; 

return 0;
}