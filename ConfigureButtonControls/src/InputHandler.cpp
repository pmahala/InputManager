#include "InputHandler.h"
#include "UpCommand.h"
#include "DownCommand.h"
#include "ButtonHelper.h"

using namespace button;

InputHandler::InputHandler()
{
    //ctor
    Input::init();
    UP_COMMAND = new UpCommand;
    DOWN_COMMAND = new DownCommand;
}

InputHandler::~InputHandler()
{
    delete UP_COMMAND;
    delete DOWN_COMMAND;
}

bool InputHandler::HandleInput()
{
    Input::takeInput();
    if(Input::isPressed(UP_BUTTON))
    {
        UP_COMMAND -> execute();
    }
    else if(Input::isPressed(DOWN_BUTTON))
    {
        DOWN_COMMAND -> execute();
    }
    else if(Input::isPressed(EXIT_BUTTON))
    {
        return false;
    }
    return true;

}
