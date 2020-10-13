#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "dnd.h"
using namespace std;


//main functions
void charSheet();


 //switch functions
void diceRoller();



 //Dice Roller Function Prototypes
int d4(int d); //rolls a d4
int d6(int d); //rolls a d6
int d8(int d); //rolls a d8
int d10(int d); //rolls a d10
int d12(int d); //rolls a d12
int d20(int d); //rolls a d20
int d100(int d); //rolls a d100 (percentile)

int main()
{
    int res = 0;
    int choice = 0;
    srand(time(0));
    int ac;
    charSheet();



    do{
        cout << "Welcome to Notey's D&D Bot!" << endl;
        cout << "Options Below!" << endl;
        cout << "1: Dice Roller" << endl;
        cout << "2: Hit or Miss (AC)" << endl;
        cout << "3: HP Adder" << endl;
        cout << "4: Character Stats" << endl;
        switch(choice)
        {
         case 1:diceRoller();
                break;
        
        }

    }while(choice != -1);

return 0;
}