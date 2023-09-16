#include "pch.h"
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
#include "DuckAdapter.h"

void TestDuck(IDuck* duck)
{
    duck->Quack();
    duck->Fly();
}
void ClientCodeForDucks() 
{
    IDuck* mallardDuck = new MallardDuck;
    ITurkey* wildTurkey = new WildTurkey;

    IDuck* turkeyAdapter = new TurkeyAdapter(wildTurkey);

    TestDuck(mallardDuck);
    TestDuck(turkeyAdapter);
}

void TestTurkey(ITurkey* turkey)
{
    turkey->Gobble();
    turkey->Fly();
}
void ClientCodeForTurkey()
{
    ITurkey* wildTurkey = new WildTurkey;
    IDuck* mallardDuck = new MallardDuck;

    ITurkey* duckAdapter = new DuckAdapter(mallardDuck);

    TestTurkey(wildTurkey);
    TestTurkey(duckAdapter);
}

/*
    This is example is from the book.
*/
int main()
{
    ClientCodeForDucks();
    cout << "================================" << endl;
    ClientCodeForTurkey();
}