#include <iostream>
#include <ctime>

using namespace std;

int main()
{

time_t current_time;
current_time = time(NULL);
cout << current_time << " seconds since 1970";

     return 0;
}