#ifndef BUTTONHELPER_H_INCLUDED
#define BUTTONHELPER_H_INCLUDED

#include<windows.h>



namespace button{

    enum KeyCode {UP_BUTTON = 119, DOWN_BUTTON = 115, EXIT_BUTTON = 120}; //w,s,x




    ///////////////////// INPUT CLASS ///////////////////////////////
    class Input{
    private:
        static HANDLE hIn;
        static INPUT_RECORD inRec;
        static DWORD numRead;
        static char readChar;



    public:
        static bool isPressed(KeyCode k);
        static void init();
        static void takeInput();


    };


    HANDLE Input::hIn {};
    INPUT_RECORD Input::inRec {};
    DWORD Input::numRead {};
    char Input::readChar {};



    bool Input::isPressed(KeyCode k)
    {

        if(k == UP_BUTTON && readChar == (char)k)
        {
            return true;
        }

        else if( k == DOWN_BUTTON && readChar == (char)k)
        {
            return true;
        }
        else if(k == EXIT_BUTTON && readChar == (char)k)
        {
            return true;
        }

        return false;
    }

    void Input::takeInput()
    {
        ReadConsoleInput(hIn,&inRec,1,&numRead);
        readChar = inRec.Event.KeyEvent.uChar.AsciiChar;
    }

    void Input::init()
    {
        hIn = GetStdHandle(STD_INPUT_HANDLE);
    }
}











#endif // BUTTONHELPER_H_INCLUDED
