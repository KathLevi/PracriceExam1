#include <stdio.h>
#include "Dice.h"

int Dice::rolls = 0;
int Dice::sides = 0;

int Dice::Roll(){
    int roll = rand() % (sides - 1);
    
    return (roll + 1);
};

int Dice::GetRolls(){
    if (Dice::Roll() > 0)
        rolls ++;
    
    return rolls;
}

int Dice::GetSides(){
    
    return sides;
}