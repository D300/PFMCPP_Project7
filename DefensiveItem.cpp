#include "DefensiveItem.h"
#include "Character.h"
#include "Utility.h"

void DefensiveItem::use(Character* character)
{
    // why derefencing this?
    useDefensiveItem(character, *this);
}

