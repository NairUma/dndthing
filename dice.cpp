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


void diceRoller()
{
    int dt;
    int dn;
    int res;
    cout << "Welcome to the Dice Roller!" << endl;
    cout << "Enter the dice type you'd like to roll: ";
    cin >> dt;   
    cout << "Enter the number of d" << dt << " you'd like to roll: ";
    cin >> dn;
 
    switch(dt)
        {
            case 4: d4(dn);
                    break;
            case 6: d6(dn);
                    break;
            case 8: d8(dn);
                    break;
            case 10: d10(dn);
                    break;
            case 12: d12(dn);
                    break;
            case 20: d20(dn);
                    break;
            case 100: d100(dn);
                    break;
            default: cout << "Invalid Number was selected, rerun program";
                    break;
        }    

}




/***********************************
D4 D4 D4 D4 D4 D4 D4 D4 D4 D4 D4 D4 
************************************/
int d4(int d)
{
int input;
int total = 0;
cout << "Dice Rolls: [ ";
for(int i = 1; i <= d; i++)
{
 input = rand() % 4 + 1;
 cout << input << " ";
 if(i != d)
   cout << ", ";
 total = total + input;
}
cout << "] = " << total;

return total;
}

/***********************************
D6 D6 D6 D6 D6 D6 D6 D6 D6 D6 D6 D6 
************************************/
int d6(int d) //rolls a d6
{
int input;
int total = 0;
cout << "Dice Rolls: [ ";
for(int i = 1; i <= d; i++)
{
 input = rand() % 6 + 1;
 cout << input << " ";
 if(i != d)
   cout << ", ";
 total = total + input;
}
cout << "] = " << total;

return total;
}

int d8(int d) //rolls a d8
{
int input;
int total = 0;
cout << "Dice Rolls: [ ";
for(int i = 1; i <= d; i++)
{
 input = rand() % 8 + 1;
 cout << input << " ";
 if(i != d)
   cout << ", ";
 total = total + input;
}
cout << "] = " << total;

return total;
}

int d10(int d) //rolls a d10
{
int input;
int total = 0;
cout << "Dice Rolls: [ ";
for(int i = 1; i <= d; i++)
{
 input = rand() % 10 + 1;
 cout << input << " ";
 if(i != d)
   cout << ", ";
 total = total + input;
}
cout << "] = " << total;

return total;
}


int d12(int d) //rolls a d12
{
int input;
int total = 0;
cout << "Dice Rolls: [ ";
for(int i = 1; i <= d; i++)
{
 input = rand() % 12 + 1;
 cout << input << " ";
 if(i != d)
   cout << ", ";
 total = total + input;
}
cout << "] = " << total;

return total;
}

int d20(int d) //rolls a d20
{
int input;
int total = 0;
cout << "Dice Rolls: [ ";
for(int i = 1; i <= d; i++)
{
 input = rand() % 20 + 1;
 cout << input << " ";
 if(i != d)
   cout << ", ";
 total = total + input;
}
cout << "] = " << total;

return total;
}


int d100(int d) //rolls a d100 (percentile)
{
int input;
int total = 0;
cout << "Dice Rolls: [ ";
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
