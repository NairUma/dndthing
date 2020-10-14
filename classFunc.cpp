#include "dnd.h"
#include <iostream>
using namespace std;

int rollD(int d, int t);

dnd::dnd()
{
 int hp = 0;
 string aSName[AS] = {"Strength", "Dexterity", "Intelligence", "Wisdom", "Constitution", "Charisma"};
 string skName[SK] = {"Athletics (STR)" "Acrobatics (DEX)", "Sleight of Hand (DEX)", "Stealth (DEX)", "Arcana (INT)",
 "History (INT)", "Investigation (INT)", "Nature (INT)", "Religion (INT)", "Animal Handling (WIS)", "Insight (WIS)",
 "Medicine (WIS)", "Perception (WIS)", "Survival (WIS)", "Deception (CHA)", "Intimidation (CHA)", "Performance (CHA)",
 "Persuasion (CHA)"};

// Strength: Athletics
// Dexterity: Acrobatics, Sleight of Hand, Stealth
// Intelligence: Arcana, History, Investigation, Nature, Religion
// Wisdom: Animal Handling, Insight, Medicine, Perception, Survival
// Charisma: Deception, Intimidation, Performance, Persuasion


}


void dnd::getInfo()
{
 cout << "- Get Information Section -" << endl;
 char ans;


 cout << "Name: ";
 cin >> name;
 //add random name generator??
 cout << "Race: ";
 cin >> race;
//add racial info to use for stats and the like
 cout << "Class: ";
 cin >> charClass;

 cout << "Would you like to insert HP or Auto-roll?" << endl;
 cout << "Enter 'Y' for yes and 'N' for no: ";
 //not added yet, need to pre-define the things for each class (probably just the basic ones)
 cin >> ans;

 cout << "Enter HP: ";
 cin >> hp;

 cout << "Enter Armor Class (AC): ";
 cin >> ac;

for(int i = 0; i < AS; i++)
{
 cout << "Enter your score for " << aSName[i] << ": ";
 cin >> aSValue[i];
}

for(int i = 0; i < SK; i++)
{
 cout << "Enter your score for " << skName[i] << ": ";
 cin >> skValue[i];
}


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
    res = rollD(dn, dt);
}
void dnd::ACdefense()
{

}




int rollD(int d, int t)
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
