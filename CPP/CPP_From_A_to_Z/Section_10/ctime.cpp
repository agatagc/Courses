#include <iostream>
#include <ctime>

using namespace std; 

int main() 
{

time_t aktualny_czas;
aktualny_czas = time(NULL);
cout << aktualny_czas << " sekund minelo od 1970 roku";

    return 0;
}