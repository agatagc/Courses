#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;

int main() {

// Example 1 (wypisze liczby od 1 do 5)
// i-- is same in code as i = i - 1;

// for (int i = 1; i <= 5; i++) 
// {
//     cout << i << endl; 
// }



// Example 2

// for (int a = 5; a <= 10; a++) 
// {
//     cout << a << endl; 
// }




//Example 3 (wypisze liczby parzyste z zakresu od 1 do 10)

// for (int z = 1; z <= 10; z++) {
//     if (z % 2 == 0) {
//         cout << z << endl; 
//     }

// }


// Example 4 ( wyswietli od 10 do 1 )

// for ( int r = 10; r >= 1; r--) {
//     cout << r << endl;
// }


// Example 5 ( wypisze 7 razy slowo LOVE)

// for (int s = 1; s <= 7; s++ ) {
//     cout << "LOVE" << endl;
// }


// Example 6

for (int t = 1, j = 9; t <= 10; t++) {
    cout << t << " * " << j << " = " << (t * j) << endl;
}

// Example 7 (Pobiera od uzytkownika 5 liczb i wyswietla te 5 liczb przy pomocy 2 petli)

vector<int> nums{};
int num;
cout << "Enter 5 number: ";
for (int l = 0; l < 5; l++) {
    cin >> num;
    nums.push_back(num);
}

cout << endl;
for (int l = 0; l < 5; l++) {
    cout << nums[l] << endl; 
}

return 0; 
}