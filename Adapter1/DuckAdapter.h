#pragma once

#include "pch.h"

/*
    This is Adapter for Classes that uses multiple inheritance
*/
class DuckAdapter
    : public IDuck
    , public ITurkey
{
    IDuck* _duck;
public:
    DuckAdapter(IDuck* duck)
        : _duck(duck)
    {
    }

    virtual void Quack() override
    {
        _duck->Quack();
    }

    virtual void Gobble() override
    {
        Quack();
    }

    virtual void Fly() override
    {
        _duck->Fly();
    }
};