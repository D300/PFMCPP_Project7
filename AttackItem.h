#pragma once

#include "AttackItem.h"
#include "Item.h"
#include "Utility.h"

struct Character; // forward declaration 
struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) 
    { 

    }
    
    void use(Character* character)
    { 
        useAttackItem(character, this); // Utility.h
    }
};
