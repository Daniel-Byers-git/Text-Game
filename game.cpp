#include "character.cpp" // Inludes "weapon_list.cpp" , "weapon.cpp" , "<string>"
#include "string_animation.cpp" // Inlcudes 
#include "battle.cpp"

int main()
{
    character player = character();
    std::string player_name;

    animate("Hello knoble adventurer.");
    animate("What is thyne name?");
    std::cin >> player_name;
    player.set_name(player_name);

    // Convo with greeting villager
    animate("Ah."); animate("Nice to meet you ",1); animate(player.get_name());
    animate("Well I'll be glad to show you around our humble...");
    animate("Huh?");
    animate("There is a thief coming at us!");

    // Thief battle
    weapon rusty_knife = weapon(1,0,"a rusty knife");
    character thief = character(15,1,"Thief",rusty_knife);
    thief.set_dropped_weapon(drop, thief_drop);
    battle thief_battle = battle();
    thief_battle.battle_func(player,thief);
    thief_battle.~battle();
    rusty_knife.~weapon();
    thief.~character();
    
    return 0;
}