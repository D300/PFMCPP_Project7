#pragma once

#include <vector>
#include <memory>
#include "Item.h"

// what is this - funcs without any class?
// would it make sense to make them static then?

std::vector<std::unique_ptr<Item>> makeHelpfulItems(int num);

std::vector<std::unique_ptr<Item>> makeDefensiveItems(int num);

struct Character;
std::string getCharacterStats(Character* ch);

void useDefensiveItem(Character*, Item&);
void useHelpfulItem(Character*, Item*);
void useAttackItem(Character*, Item*);
