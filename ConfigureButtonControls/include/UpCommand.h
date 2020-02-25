#ifndef UPCOMMAND_H
#define UPCOMMAND_H

#include "Command.h"


class UpCommand : public Command
{
    public:

        virtual ~UpCommand() = default;

        virtual void execute() override;

    protected:

    private:
};

#endif // UPCOMMAND_H
