#ifndef CEILINGFANONCOMMAND_H
#define CEILINGFANONCOMMAND_H

#include "command.h"
#include "ceilingfan.h"

class CeilingFanOnCommand : public Command {
protected:
    CeilingFan* ceilingFan;
public:
    CeilingFanOnCommand(CeilingFan*);
    virtual void execute();
};

class ceilingfanoncommand
{
};

#endif // CEILINGFANONCOMMAND_H
