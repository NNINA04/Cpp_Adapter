#pragma once

class ITurkey
{
public:
	virtual void Gobble() = 0;
	virtual void Fly() = 0;

	virtual ~ITurkey() {}
};