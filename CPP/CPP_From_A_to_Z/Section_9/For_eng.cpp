#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() {

// Example 1 (print numbers 1 to 5)
// i-- is same in code as i = i - 1;

// for (int i = 1; i <= 5; i++)
// {
// cout << i << endl;
// }



//Examples 2

// for (int a = 5; a <= 10; a++)
// {
// cout << a << endl;
// }




//Example 3 (will print even numbers from 1 to 10)

// for (int z = 1; z <= 10; z++) {
// if (with % 2 == 0) {
// cout << z << endl;
// }

// }


// Example 4 (will print 10 to 1)

// for ( int r = 10; r >= 1; r--) {
// cout << r << endl;
// }


// Example 5 (print LOVE 7 times)

// for (int s = 1; s <= 7; s++ ) {
// cout << "LOVE" << endl;
// }


//Examples 6

for (int t = 1, j = 9; t <= 10; t++) {
     cout << t << " * " << j << " = " << (t * j) << endl;
}

// Example 7 (Retrieves 5 numbers from the user and displays these 5 numbers using 2 loops)

vector<int> numbers{};
int num;
cout << "Enter 5 number: ";
for (int l = 0; l < 5; l++) {
     cin >> num;
     numbers.push_back(num);
}

cout << endl;
for (int l = 0; l < 5; l++) {
     cout << numbers[l] << endl;
}

return 0;
}