#ifndef BUTTONHELPER_H_INCLUDED
#define BUTTONHELPER_H_INCLUDED

#include<windows.h>




namespace button{

    class KeyCode
    {
        public:
            static void ResetKeyCode();
            static void SetKeyCode(char up,char down);
            static int UP_BUTTON;
            static int DOWN_BUTTON;
            //static int CURRENT_PRESS;
            static int EXIT_BUTTON;

    };

    class Input{
    private:
        static HANDLE hIn;
        static INPUT_RECORD inRec;
        static DWORD numRead;
        static char readChar;



    public:
        static bool isPressed(int buttonPress);
        static void init();
        static void takeInput();


    };

}











#endif // BUTTONHELPER_H_INCLUDED
