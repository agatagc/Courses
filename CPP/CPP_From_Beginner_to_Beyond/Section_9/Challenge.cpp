/*
Challenge 

This challenge is about using a collection (list) of integers and allowing the user
to select options from a menu to perform operations on the list.

Your program should display a menu options to the user as follows:

P - Print numbers
A - Add a numbers
M - Display mean of the numbers
S - Display the smallest number
L - Display the largest number
Q - Quit

Enter your choice:

The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you shoul display, "Unknown selection, please try again" and the menu options should be 
displayed again.

If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackest separated by a space.
For example, [1 2 3 4 5]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
witch you will add to ther list and then display it was added. For example, if the user enters 5 
You shoulod display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm' you should calculate the mean or average of the elements in the list and display it.
If the list is empty you  should display, "Unable to calculate the mean - no data"

If the users 'S' or 's' you should display the smallest element in the list .
For example, if the list contains [2 4 5 1], you should display , "The smallest number is 1"
If the list is empty you should display , "Unable to determine the smallest number - list is empty"

If the users enters 'L' or 'l' you should display the largest element in the list 
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the users 'Q' or 'q' then you should display "Goodbye" and the program should terminate

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic. 

This exercise can be challenging! It may likely take a few attempts before you camplete it -- that's OK!

Finaly, be sure to test your program as you go and at the end.

Hint: Use the vector!

Additional functionality if you wish to extend this program.

- serch for a number in the list and if found display the number of times it occurs in the list 
- clearning out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries 
- come up with your own ideas!

*/
#include <iostream>
#include <vector>

using namespace std;


int main() 
{
    char selection {};
    vector <int> list {};

    do {
        cout << "\n----------------------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a numbers" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p')
        {
            if (list.size() < 1) 
            {
                cout << "[] - the list is empty" << endl;  
            }
            else 
            {
                cout << "[";

                for (int i = 0; i < list.size(); i++)
                {
                    cout << list[i];

                    if (i < list.size() - 1)
                    {
                        cout << " ";
                    }
                }

                cout << "]";
            }

        }   
        else if (selection == 'A' || selection == 'a')
        {
            int selectedNumber {};
            cout << "Enter an integer to add to the list: ";
            cin >> selectedNumber;

            list.push_back(selectedNumber);

            cout << selectedNumber << " added" << endl;
        }
        else if (selection == 'M' || selection == 'm')
        {
            if (list.size() < 1)
            {
                cout << "Unable to calculate the mean - no data" << endl;
            }
            else
            {
                int sum {};

                for (int i = 0; i < list.size(); i++)
                {
                    sum += list[i];
                }

                cout << "Average: " << double(sum) / list.size() << endl;
            }
        }
        else if (selection == 'S' || selection == 's')
        {   
            if (list.size() < 1)
            {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            }
            else
            {

                int smallestNumber {list[0]};

                for (int i = 1; i < list.size(); i++)
                {
                    if (smallestNumber > list[i])
                    {
                        smallestNumber = list[i];
                    }
                }
                cout << "The smallest number in list is: " << smallestNumber << endl;
            }
            
        }
        else if (selection == 'L' || selection == 'l')
        {
            if (list.size() < 1)
            {
                cout << "Unable to determine the largest number - list is empty" << endl;
            }
            else
            {
                int largestNumber {list[0]};

                for (int i = 1; i < list.size(); i++)
                {
                    if (largestNumber < list[i])
                    {
                        largestNumber = list[i];
                    }
                }
                cout << "The largest number in list is: " << largestNumber << endl;
            }
        }
        else if (selection == 'Q' || selection == 'q')
        {
            cout << "Goodbye..." << endl;
        }
        else
        {
            cout << "Unknown selection, please try again" << endl;
        }
    } while (selection != 'q' && selection != 'Q');

    return 0;
}