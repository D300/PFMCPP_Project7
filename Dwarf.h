#pragma once

struct Dwarf : Character
{
    Dwarf(std::string name_, int hp_, int armor_);
    //~Dwarf();
    
    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
