#include <iostream>
#include <stdlib.h>
#include "InputHandler.h"
#include "ButtonHelper.h"



using namespace std;

int main()
{

    InputHandler INPUT;

    bool CONTINUE = true;

    do{
        system("cls");
        cout << "\nMain Menu";
        cout << "\n1.Play Game(Test Controls)";
        cout << "\n2.Change Controls";
        cout << "\n3.Exit";
        cout << "\nEnter Choice(1-3)";

        int choice {};
        cin >> choice;

        switch(choice)
        {
        case 1:
            {
                system("cls");
                cout << "\nTaking Inputs";
                while(INPUT.HandleInput());
            }

            break;
        case 2:
            {
                system("cls");
                cout << "\nChanging controls";
                cout << "\nPress Button For Up: ";
                char up{},down{};
                cin >> up;
                cout << "\nPress Button For Down: ";
                cin >> down;
                button::KeyCode::SetKeyCode(up,down);
            }

            break;
        case 3:
        default:
            {
                CONTINUE = false;
            }
            break;

        }

    }while(CONTINUE);
    cout << "\nQUITTING!!";

    return 0;
}
