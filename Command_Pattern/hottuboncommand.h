#ifndef HOTTUBONCOMMAND_H
#define HOTTUBONCOMMAND_H

#include "command.h"
#include "hottub.h"

class HottubOnCommand : public Command {
protected:
    Hottub* hottub;
public:
    HottubOnCommand(Hottub*);
    virtual void execute();
};

class hottuboncommand
{
};

#endif // HOTTUBONCOMMAND_H
