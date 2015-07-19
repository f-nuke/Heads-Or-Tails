#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

//variables
	string again;
	string choice;
	int intc; //integer equivalent of user's choice


int ask()
{
    cout << "Wanna play again? :) (y or n):";
    cin >> again;
    return 0;
}

int main()
{

do{
	cout << "Hello. Your choice: (H or T): ";
    srand(time(NULL));
	int num = rand() % 2; //0 or 1


	cin >> choice; //choice = choice of the user

    choice = tolower(choice[0]);


	if(choice == "h")
    {
        intc = 0;
    }
    else if(choice == "t")
    {
        intc = 1;
    }
    else
    {
        cout << "Invalid choice. Input H or T";
        intc = 2;
    }

    if (num == intc)
    {
        cout << "You won! :)";
    }
    else if(intc == 3)
    {
        ask();
    }
    else
    {
        cout << "You lost. :(";
    }
    if(again != "y" || "n")
    {
        ask();
    }

} while (again == "y");
    return 0;
}



