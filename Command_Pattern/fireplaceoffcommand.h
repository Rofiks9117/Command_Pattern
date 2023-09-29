#ifndef FIREPLACEOFFCOMMAND_H
#define FIREPLACEOFFCOMMAND_H

#include "command.h"
#include "fireplace.h"

class FireplaceOffCommand : public Command
{
protected:
    Fireplace* fire;
public:
    FireplaceOffCommand(Fireplace*);
    virtual void execute();
};

class fireplaceoffcommand
{
};

#endif // FIREPLACEOFFCOMMAND_H
