#ifndef Practice_for_Exam_I_Dice_h
#define Practice_for_Exam_I_Dice_h
#include <ctime>
#include <cstdlib>

using namespace std;

class Dice
{
private:
   static int rolls;
   static int sides;
    
public:
    Dice(int Sides);
    
    int Roll();
    
    int GetRolls();
    int GetSides();
};

#endif
