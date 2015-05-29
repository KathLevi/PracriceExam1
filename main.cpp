#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Dice.h"
using namespace std;

int main(){
    srand(time(NULL));
    int userSides;
    cout << "Please enter a number of sides: ";
    cin >> userSides;
    
    Dice d(6);
    cout << d.Roll() << endl;
    if (d.GetSides()!= 6) {
        cout << "Error in GetSides(). It should return 6\n";
        return 0;
    }
    
    //Roll the dice 100 times and make sure it workds every time
    
    bool passed = true;
    for (int i = 0; i < 100; i++){
        int x = d.Roll();
        if (x < 1 || x > 6 ) { //Roll returned an incorrect side
            cout << "Error in Roll() method! Roll returned " << x << endl;
            passed = false;
            break;
        }
    }
    if ( passed )
        cout << "Passed roll test" << endl; // Should output this message
    cout << d.GetRolls() << endl; //Should output 101
    
}