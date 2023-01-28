// List of weapons in game
#include "weapon.cpp"
#include "time.h"

struct weapon_drop
{
    weapon_drop(int droprates[])
    {
        for (int i = 0; i < 20; i++)
        {
            drop_rate[i] = droprates[i];
        }
    }
    int generate_weapon_drop()
    {
        std::srand (time(NULL));
        int rand_index = rand() % 20;
        return drop_rate[rand_index];
    }
    void set_drop_rate(int droprates[])
    { 
        for (int i = 0; i < 20; i++)
        {
            drop_rate[i] = droprates[i];
        }
    }
    int drop_rate[20];
};
int droprates[] = {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,3};
weapon_drop drop = weapon_drop(droprates); // ! "drop" is the weapon_drop to be called in EVERY weapon drop of an enemy

// Weapon Constructor
// weapon(damage, rarity, name)


//starting weapon
weapon stick = weapon(1,0,"a stick");

// Thief
weapon thief_drop(weapon_drop drop_func)
{   
    int drop = drop_func.generate_weapon_drop();
    weapon return_weapon;
    weapon rusty_knife = weapon(1,0,"a rusty knife");
    weapon knife = weapon(2,1,"a knife");
    weapon dagger = weapon(4,2,"a dagger");
    weapon thiefs_blade = weapon(6,3,"the thiefs blade");
    int thief_blade_drop[20] = {0,0,0,0,0,0,0,0,1,1,1,1,1,1,2,2,2,2,3,3};
    switch(drop)
    {
        case 0:
            return_weapon = rusty_knife;
            knife.~weapon();
            dagger.~weapon();
            thiefs_blade.~weapon();
            break;
        case 1:
            return_weapon = knife;
            rusty_knife.~weapon();
            dagger.~weapon();
            thiefs_blade.~weapon();
            break;
        case 2:
            return_weapon = dagger;
            knife.~weapon();
            rusty_knife.~weapon();
            thiefs_blade.~weapon();
            break;
        case 3:
            return_weapon = thiefs_blade;
            knife.~weapon();
            dagger.~weapon();
            rusty_knife.~weapon();
            drop_func.set_drop_rate(thief_blade_drop);
            break;
        default:
            printf("error");
            return_weapon = stick;
    }
    return return_weapon;
}


