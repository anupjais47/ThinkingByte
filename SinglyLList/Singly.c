#include"Singly.h"
/*
ADT for MainMenu
Purpose         :- To Create Main Menu
Precondition    :- None
Input           :- None
Output          :- Main Manu
Postcondition   :- None
*/
int MainMenu()
{
    int userchoice;
    printf("\t\t1. Create\n\t\t2. Insert\n\t\t0. EXIT\n\tEnter Your Choise : ");
    scanf("%d",&userchoice);
    return userchoice;
}

/*
ADT for ClearScreen
Purpose         :- To Clear The Screen
Precondition    :- None
Input           :- None
Output          :- Did Thair Work
Postcondition   :- None
*/
void cls()
{
    system("clear");
}

/*
ADT for InsertMenu
Purpose         :- To Show Insert Menu
Precondition    :- Array Must be Created
Input           :- None
Output          :- Show Their Menu
Postcondition   :- None
*/
int InsertMenu()
{
    int insertchoice;
    printf("\t\t1. Insert At Beggning\n\t\t2. Insert At Desired Location\n\t\t3. Insert in Sorted Order\n\t\t4. Insert At END\n\t\t1. Special Case\n\tEnter Your Choice : ");
    scanf("%d",&insertchoice);
    return insertchoice;
}