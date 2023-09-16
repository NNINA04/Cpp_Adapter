#pragma once

#include "pch.h"

class MallardDuck
    : public IDuck
{
public:
    virtual void Quack()
    {
        cout << "MallardDuck: Quack" << endl;
    }

    virtual void Fly()
    {
        cout << "MallardDuck: Fly" << endl;
    }
};
