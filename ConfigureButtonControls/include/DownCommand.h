#ifndef DOWNCOMMAND_H
#define DOWNCOMMAND_H

#include "Command.h"


class DownCommand : public Command
{
    public:

        virtual ~DownCommand() = default;

        virtual void execute() override;

    protected:

    private:
};

#endif // DOWNCOMMAND_H
