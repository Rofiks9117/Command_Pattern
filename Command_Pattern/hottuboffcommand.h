#ifndef HOTTUBOFFCOMMAND_H
#define HOTTUBOFFCOMMAND_H

#include "command.h"
#include "hottub.h"

class HottubOffCommand : public Command {
protected:
    Hottub* hottub;
public:
    HottubOffCommand(Hottub*);
    virtual void execute();
};

class hottuboffcommand
{
};

#endif // HOTTUBOFFCOMMAND_H
