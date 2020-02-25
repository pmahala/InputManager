#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H
#include "Command.h"


class InputHandler
{
    public:
        InputHandler();
        ~InputHandler();

        bool HandleInput();

    protected:

    private:
        Command* UP_COMMAND;
        Command* DOWN_COMMAND;
};

#endif // INPUTHANDLER_H
