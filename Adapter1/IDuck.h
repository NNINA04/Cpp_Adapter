#pragma once

class IDuck
{
public:
	virtual void Quack() = 0;
	virtual void Fly() = 0;

	virtual ~IDuck() {}
};