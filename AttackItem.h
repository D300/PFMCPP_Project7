#include "Item.h"

struct Character; // forward declaration 

struct AttackItem : Item
{
    AttackItem() : Item("attack item", 10) 
    { 

    }
    
    void use(Character* character) override;
};
