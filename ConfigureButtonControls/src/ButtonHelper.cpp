#include "ButtonHelper.h"



int button::KeyCode::UP_BUTTON{};

int button::KeyCode::DOWN_BUTTON{};

int button::KeyCode::EXIT_BUTTON{};

void button::KeyCode::ResetKeyCode()
{
    UP_BUTTON = 119;
    DOWN_BUTTON = 115;
    EXIT_BUTTON = 120;
}

void button::KeyCode::SetKeyCode(char up,char down)
{
    UP_BUTTON = (int)up;
    DOWN_BUTTON = (int)down;
    EXIT_BUTTON = 120;
}

HANDLE button::Input::hIn {};
INPUT_RECORD button::Input::inRec {};
DWORD button::Input::numRead {};
char button::Input::readChar {};

    bool button::Input::isPressed(int buttonPress)
    {

        if(buttonPress == button::KeyCode::UP_BUTTON && readChar == (char)buttonPress)
        {
            return true;
        }

        else if(buttonPress == button::KeyCode::DOWN_BUTTON && readChar == (char)buttonPress)
        {
            return true;
        }
        else if(buttonPress == button::KeyCode::EXIT_BUTTON && readChar == (char)buttonPress)
        {
            return true;
        }

        return false;
    }

    void button::Input::takeInput()
    {
        ReadConsoleInput(hIn,&inRec,1,&numRead);
        readChar = inRec.Event.KeyEvent.uChar.AsciiChar;
    }

    void button::Input::init()
    {
        hIn = GetStdHandle(STD_INPUT_HANDLE);
    }
