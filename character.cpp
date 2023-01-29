#pragma once
#include "weapon_drop.cpp"
#include <functional>

struct character
{
        character();
        character(int health_in, int level_in, std::string name_in, weapon weapon_in);
        void set_health(int health_in);
        int get_health();
        int get_level();
        std::string get_name();
        void set_name(std::string name_in);
        void level_up(character enemy);
        weapon get_eq_weapon();
        void set_dropped_weapon(weapon_drop the_drop_func, std::function<weapon(weapon_drop)> weapon_drop_func);
        weapon get_dropped_weapon();
        ~character(){}
    private:
        int health;
        int level;
        std::string name;
        weapon eq_weapon;
        weapon dropped_weapon; // for enemies only
};

character::character()
{
    health = 20;
    level = 1;
    name = "";
    eq_weapon = stick;
}

character::character(int health_in, int level_in, std::string name_in, weapon weapon_in)
{
    health = health_in;
    level = level_in;
    name = name_in;
    eq_weapon = weapon_in;
}

void character::set_health(int health_in)
{
    health = health_in;
}

int character::get_health()
{
    return health;
}

int character::get_level()
{
    return level;
}

std::string character::get_name()
{
    return name;
}

void character::set_name(std::string name_in)
{
    name = name_in;
}

void character::level_up(character enemy)
{
    level += enemy.level / 4;
}

weapon character::get_eq_weapon()
{
    return eq_weapon;
}


void character::set_dropped_weapon(weapon_drop the_drop_rate, std::function<weapon(weapon_drop)> weapon_drop_func)
{
    dropped_weapon =  weapon_drop_func(the_drop_rate);
}

weapon character::get_dropped_weapon()
{
    return dropped_weapon;
}


