#ifndef FIREPLACE_H
#define FIREPLACE_H

#include <string>
#include <iostream>

using namespace std;

class Fireplace
{
public:
    Fireplace(string);
    string location;
    void on();
    void off();
};

class fireplace
{
};

#endif // FIREPLACE_H
