#pragma once

#include "pch.h"

class WildTurkey
    : public ITurkey
{
public:
    virtual void Gobble() 
    {
        cout << "WildTurkey: Gobble" << endl;
    }

    virtual void Fly()
    {
        cout << "WildTurkey: Fly" << endl;
    }
};
