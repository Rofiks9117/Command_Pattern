#ifndef STEREOONWITHCDCOMMAND_H
#define STEREOONWITHCDCOMMAND_H

#include "command.h"
#include "stereo.h"

class StereoOnWithCDCommand : public Command {
protected:
    Stereo* stereo;
public:
    StereoOnWithCDCommand(Stereo*);
    virtual void execute();
};

class stereoonwithcdcommand
{
};

#endif // STEREOONWITHCDCOMMAND_H
