#ifndef FIREPLACEONCOMMAND_H
#define FIREPLACEONCOMMAND_H

#include "command.h"
#include "fireplace.h"

class FireplaceOnCommand : public Command
{
protected:
    Fireplace* fire;
public:
    FireplaceOnCommand(Fireplace*);
    virtual void execute();
};

class fireplaceoncommand
{
};

#endif // FIREPLACEONCOMMAND_H
