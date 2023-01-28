#include "string_include.h"

struct weapon
{
        weapon();
        weapon(int damage_in, int rarity_in, std::string name_in);
        ~weapon(){}
        std::string get_name();
        int get_damage();
        int get_rarity(); // rarity is 0 - 4
    private:
        int rarity;
        int damage;
        std::string name;
};

weapon::weapon()
{
    damage = 1;
    rarity = 0;
    name = "stick";
}

weapon::weapon(int damage_in, int rarity_in, std::string name_in)
{
    damage = damage_in;
    rarity = rarity_in;
    name = name_in;
}

std::string weapon::get_name()
{
    return name;
}

int weapon::get_damage()
{
    return damage; 
}

int weapon::get_rarity()
{
    return rarity;
}
