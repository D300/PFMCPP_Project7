#include "AttackItem.h"
#include "Character.h"
#include "Utility.h"

void AttackItem::use(Character* character) 
{ 
    useAttackItem(character, this); // Utility.h
}
