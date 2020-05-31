#include "Dwarf.h"
#include "Utility.h"

// base class ctor:
// does attackDamage equal armor?
// ! Character(int hp, int armor_, int attackDamage_ );

Dwarf::Dwarf(std::string name_, int hp_, int armor_) :
Character(hp_, armor_, 4 ), // base class init for abstract class
name(name_)
{
    //name, hit points, armor.
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(1);
}

const std::string& Dwarf::getName()
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this); // from Utility.h
}
