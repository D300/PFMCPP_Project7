#pragma once

#include "Item.h"
//#include "Character.h"

struct Character;
struct DefensiveItem : Item
{
    DefensiveItem() : Item("defensive item", 3) { }
    void use(Character* character) override;
};

