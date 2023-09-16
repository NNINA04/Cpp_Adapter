#pragma once

#include "pch.h"

/*
    This is Adapter for Object that uses Composition
*/
class TurkeyAdapter
    : public IDuck
{
    ITurkey* _turkey;
public:
    TurkeyAdapter(ITurkey* turkey)
        : _turkey(turkey)
    {
    }

    virtual void Quack() override
    {
        _turkey->Gobble();
    }

    virtual void Fly() override
    {
        _turkey->Fly();
    }
};