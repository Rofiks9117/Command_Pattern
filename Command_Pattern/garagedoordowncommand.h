#ifndef GARAGEDOORDOWNCOMMAND_H
#define GARAGEDOORDOWNCOMMAND_H

#include "command.h"
#include "garagedoor.h"

class GarageDoorDownCommand : public Command {
protected:
    GarageDoor* garageDoor;
public:
    GarageDoorDownCommand(GarageDoor*);
    virtual void execute();
};

class garagedoordowncommand
{
};

#endif // GARAGEDOORDOWNCOMMAND_H
