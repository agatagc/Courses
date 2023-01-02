// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// Zadanie 1:

// 1. Funkcja, która poprosi użytkownika o podanie długości listy w przedziale od 10 do 100, utworzy listę liczb losowych typu int, obliczy wartość średnią z liczb na liście i wyświetl tę wartość w konsoli.
// 2. Funkcja, która prosi użytkownika o wprowadzenie ciągu znaków o minimalnej długości 5 znaków, wyświetli to, co użytkownik wprowadził wielkimi i małymi literami oraz bez znaków „a” i „A”.
// 3. Funkcja, która wygeneruje listę 10 pozycji, wypełni ją losowymi liczbami typu int, posortuje listę od największej do najmniejszej i wyświetli ją.
// 4. Funkcja, która poprosi użytkownika o wprowadzenie ciągu o minimalnej długości 10 i wyświetli ciąg bez znaków „a”, „e” i „ ” (spacja) oraz wyświetli długość string przed i po usunięciu tych znaków.
// 5. Gra: Kamień, papier, nożyce. Może to być podane przez użytkownika jako k, p, n lub 1, 2, 3. Gra ma być pętlą, która zakończy się, gdy użytkownik wygra. Gra ma na celu losowe wybranie własnego wyboru (kamienia, papieru lub nożyczek) i poproszenie gracza o dokonanie własnego wyboru.
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <cstring>
#include <list>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;


bool IsInRange(int value, int min, int max)         // przyjmuje 3 parametry, 1 parametr to jest zmienna ktora sprawdzam, 2 parametr to jest minimalna wartosc, ktora moze byc dla tej zmiennej zeby wynikiem bylo true, 3 parametr to jest maxymalny rozmiar pierwszego parametru
{
    return (value >= min && value <= max);      // funkcja zwraca wynik warunku w tym przypadku jesli value jest wieksze lub rowne wartsci zmiennej min i value jest mniejsze lub rowne wartosci zmiennej max.
}

void Task1() 
{
    int size = 0;   // Deklaracja zmiennej określającej rozmiar listy  (poprostu zeby cos bylo, moge nawet nie wpisywac 0).
    vector<int> generatedNumbers;       // tworzenie(deklaracja) listy dla generowanych liczb

    do
    {
        cout << "Enter size of list between 10 and 100: "; 
        cin >> size;
    //} while (size < 10 || size > 100);              // petla, ktora sprawdza czy podana liczba jest mniejsza od 10 lub wieksza od 100. pyta sie w kolko dopoki nie dostanie prawidlowej liczby z tego przedzialu.
    } while (IsInRange(size, 10, 100) == false);        // sprawdza wynik funkcji IsInRange (sprawdza czy podana wartosc jest w przedziale pomiedzy 10 a 100)

    float sum = 0;      // zadeklarowana 0, bo narazie w niej nic nie ma.

    for (size_t i = 0; i < size; i++)       // petla, ktora sie zrobi tyle razy ile wynosi rozmiar listy 
    {
        int randomGeneratedNumber = (1 + (rand() % 100));   // generuje losowa liczbe od 0 do 100 

        generatedNumbers.push_back(randomGeneratedNumber);    // Dodaje wygenerowana liczbe do listy
        sum += randomGeneratedNumber;     // dodaje do sumy wygenerowane liczbe
    }

    float average = sum / generatedNumbers.size();  // srednia = suma z wygenerowanych liczb / rozmiar listy wygenerowanych liczb

    cout << "Average number size in list: " << average << endl;
}

void Task2()
{
    string text; 
    string upperCasteText;
    string lowerCaseText;

    do
    {
        cout << "Enter atleast 5 character loong text:";
        cin >> text;
    } while (text.length() < 5); // Pytaj o input dopóki nie spełni warunku

    for (char character: text) // Pętla o długości znaków w zmiennej text
    {
        upperCasteText += (char)toupper(character); // Dodanie do stringu upperCaseText wyinku funkcji touppper przetworzonego na char 
        lowerCaseText += (char)tolower(character); // Dodanie do stringu lowerCaseText wyinku funkcji tolower przetworzonego na char
    }
    
    cout << upperCasteText << endl; // Wyswietlenie zawartosci zmiennej uperCaseText
    cout << lowerCaseText << endl; // Wyswietlenie zawartosci zmiennej lowerCaseText
}

void Task3()
{
    list<int> generatedNumbers;       // tworzenie(deklaracja) listy dla generowanych liczb

    for (size_t i = 0; i < 10; i++)       // petla, ktora sie zrobi tyle razy ile wynosi rozmiar listy 
    {
        int randomGeneratedNumber = (1 + (rand() % 100));   // generuje losowa liczbe od 0 do 100 

        generatedNumbers.push_back(randomGeneratedNumber);    // Dodaje wygenerowana liczbe do listy
    }

    generatedNumbers.sort();

    cout << "Randomly generated list" << endl;

    for (int number: generatedNumbers) // Wyswietl wygenerowane i posortowane numery 
    {
        cout << number << endl;
    } 
}

void Task4()
{
    string text;

    do
    {
        cout << "Enter atleast 10 character loong text: " << endl;
        cin >> text;
    } while (text.length() < 10); // Pytaj o input dopóki nie spełni warunku

    cout << "Initial text: " << text << endl;

    text.erase(remove(text.begin(), text.end(), 'a'), text.end()); // Usuwanie ze stringa Text znaku 'a'
    text.erase(remove(text.begin(), text.end(), 'A'), text.end()); // Usuwanie ze stringa Text znaku 'A'
    text.erase(remove(text.begin(), text.end(), ' '), text.end()); // Usuwanie ze stringa Text znaku ' '

    cout << "Processed text: " << text << endl;
}

void Task5()
{
    int playerPick;
    int computerPick = (1 + (rand() % 3)); // Losowo wygenerowany numer dla komputera

    do
    {
        cout << "Pick (Scissors (1), Paper (2), Stone (3)): " << endl;
        cin >> playerPick;
    } while (IsInRange(playerPick, 1, 3) == false); // Pytaj o wybranie 1,2 lub 3 


    if (computerPick == 1 && playerPick == 1)
    {
        cout << "Draw" << endl;
    }
    else if (computerPick == 1 && playerPick == 2)
    {
        cout << "You lost" << endl;
    }
    else if (computerPick == 1 && playerPick == 3)
    {
        cout << "You win" << endl;
    }
    else if (computerPick == 2 && playerPick == 1)
    {
        cout << "You win" << endl;
    }
    else if (computerPick == 2 && playerPick == 2)
    {
        cout << "Draw" << endl;
    }
    else if (computerPick == 2 && playerPick == 3)
    {
        cout << "You Lost" << endl;
    }
    else if (computerPick == 3 && playerPick == 1)
    {
        cout << "You lost" << endl;
    }
    else if (computerPick == 3 && playerPick == 2)
    {
        cout << "You Win" << endl;
    }
    else if (computerPick == 3 && playerPick == 3)
    {
        cout << "Draw" << endl;
    }
}

int main() 
{
    srand(time(0)); // Seed for random number generator

    Task1();
    Task2();
    Task3();
    Task4(); // Dziala bez spacji???
    Task5();

    return 0; 
}