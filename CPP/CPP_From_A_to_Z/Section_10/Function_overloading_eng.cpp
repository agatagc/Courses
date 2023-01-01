#include <iostream>
#include <iomanip>

using namespace std;


void print(int number)
{
     cout << number << endl;
}

void print(float number)
{
     cout << fixed << setprecision(2) << number << endl;
}

void print(string string)
{
     cout << string << endl;
}

void print(string string_1, string string_2)
{
     cout << string_1 << " " << string_2 << endl;
}

void print(int num_1, int num_2)
{
     cout << num_1 << " " << num_2 << endl;
}

void print(float num_1, float num_2)
{
     cout << num_1 + num_2 << endl;
}

int main()
{

//print(4);
//print(7.0F);
//print("Programming");


print("Development", "C++");
print(2, 5);
print(3.0F, 8.0F);
     return 0;
}