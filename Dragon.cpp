#include "Dragon.h"
#include "DragonSlayer.h"

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

Dragon::Dragon(std::string name_, int hp_, int armor_)
{

}
    
const std::string& Dragon::getName()
{

}

std::string Dragon::getStats()
{

}
