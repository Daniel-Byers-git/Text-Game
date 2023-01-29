#include "character.cpp" // "weapon_drop.cpp" already included
#include "string_animation.cpp"

struct battle
{
    battle(){};
    void battle_func(character player, character enemy);
    ~battle(){};
};

void battle::battle_func(character player, character enemy)
{
    /*
     //// ! Test Code ONLY:
        if (player.get_health() > enemy.get_health())
        {
            animate("You've defeated the enemy!");
            animate(enemy.get_name(),1); animate(" has dropped ",1); animate(enemy.get_dropped_weapon().get_name());
            animate("You would like to equip ",1); animate(enemy.get_dropped_weapon().get_name(),1); animate("?");
            animate("Yes(1) / No(0) : Current item equipped (",1); animate(player.get_eq_weapon().get_name(),1); animate(")");
        }
    */
}