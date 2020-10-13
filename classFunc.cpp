#include "dnd.h"
#include <iostream>
using namespace std;


dnd::dnd()
{

}

void dnd::getInfo()
{
    
}
void dnd::charSheet()
{

} //prints out a character sheet!
void dnd::diceRoller()
{
    int dt;
    int dn;
    cout << "Welcome to the Dice Roller!" << endl;
    cout << "-1 will allow you to exit." << endl << endl;
    cout << "Enter the dice type you'd like to roll: ";
    cin >> dt;   
    cout << "Enter the number of d" << dt << " you'd like to roll: ";
    cin >> dn;

    while(dt != 4 && dt != 6 && dt != 8 && dt != 10 && dt != 12 && dt !=  20 && dt != 100 && dt != -1)
    {
    cout << "Invalid Dice Type, try again: ";
    cin >> dt;
    }
    int res;
    res = dRoll(dn, dt);
}
void dnd::ACdefense()
{

}




int dRoll(int d, int t)
{
    int input;
    int total = 0;
    cout << "Dice Rolls: [ ";
    if(d != 100)
    {   
        for(int i = 1; i <= d; i++)
        {
            input = rand() % t + 1;
            cout << input << " ";
            if(i != d)
            cout << ", ";
            total = total + input;
        }
    cout << "] = " << total;

    return total;
    }
else
{
    {
for(int i = 1; i <= d; i++)
{
 input = rand() % 10;

switch(input)
{
 case 0: input = 00;
         break;
 case 1: input = 10;
         break;
 case 2: input = 20;
         break;
 case 3: input = 30;
         break;
 case 4: input = 40;
         break;
 case 5: input = 50;
         break;
 case 6: input = 60;
         break;
 case 7: input = 70;
         break;
 case 8: input = 80;
         break;
 case 9: input = 90;
         break;
}
if(input == 0)
{;
 cout << input << "0 ";
}
else
 cout << input << " ";
 
 if(i != d)
   cout << ", ";
 total = total + input;
}
cout << "] = " << total;

return total;
}

}
}
