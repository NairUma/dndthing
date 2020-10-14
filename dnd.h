#ifndef DND_H
#define DND_H

//#include <iostream>
#include <string>
using namespace std;


const int AS = 6; //ability scores
const int SK = 18; //number of skills

class dnd
{
    private:
        int ac; //armor class
        string name; //name
        int hp; //hp
        string race; //character race
        string aSName[AS]; //ability score names
        int aSValue[AS]; //ability score VALUES from user

        string skName[SK]; //skill names
        int skValue[SK]; //skill values from user

        int level; //character's level
        int st[AS]; //saving throws
        int charClass; //character's class

    public:
        dnd();
        void getInfo();
        void charSheet(); //prints out a character sheet!
        void diceRoller();
        void ACdefense(); //for seeing if something hits
        //add more as I think of them!


};



#endif