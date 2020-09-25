#include <iostream>
#include "FruitClass.h"
using namespace std;

void BeginGame()
{
    system("cls");
    string name;
    int counter=0, targetAmount;

    cout << "How many fruits want to add into salad? " << endl;
    cin >> targetAmount;
    do
    {
        cout << "\nAdd fruits that you like : " << endl;
        cin >> name;
        Fruit fruit(name);
        if (counter == 0)
        {
            fruit.Chopp();
            fruit.Adding();
        }
        else
        {
            fruit.Chopp();
            fruit.Adding();
            fruit.Mix();
        }
        counter++;
    }
    while (counter < targetAmount);

    cout << "\nYour salad is completed. Enjoy!\n";
}

void ShowMenu()
{
    int choice;
    do
    {
        cout << "*** Fruit Salad Game ***" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Quit" << endl;

        cin >> choice;
        if (choice == 1)
            BeginGame();
    } while (choice != 1 && choice != 2);
}

void main()
{
    ShowMenu();
    system("pause");
}
