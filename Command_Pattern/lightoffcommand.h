#ifndef LIGHTOFFCOMMAND_H
#define LIGHTOFFCOMMAND_H

#include "command.h"
#include "light.h"

class LightOffCommand : public Command {
protected:
    Light* light;
public:
    LightOffCommand(Light*);
    virtual void execute();
};

class lightoffcommand
{
};

#endif // LIGHTOFFCOMMAND_H
