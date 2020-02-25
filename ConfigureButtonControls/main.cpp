#include <iostream>
#include"InputHandler.h"

using namespace std;

int main()
{
    cout << "\nTaking Inputs";
    InputHandler INPUT;

    while(INPUT.HandleInput());
    cout << "\nQUITTING!!";

    return 0;
}
