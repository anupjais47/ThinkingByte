#include"Singly.h"
int main()
{
    printf("\tChoose Your Choice\n");
    while (1)
    {
        
       int choice,created=0,Ichoice;
       choice = MainMenu();
       switch (choice)
       {
       case 0:
           cls();
           printf("Thank You For Using Our Program\n\tVisit Again..\n");
           exit(0);
           break;
        case 1:
            cls();
            if(created)
            {
                printf("Space Occupation Successful\n");
                created=1;
            }
            else
            {
                printf("\aSpace is Already Occupied\n");
            }
            
            break;
        case 2:
            cls();
            if(!created)
            {
                printf("\aSorry Space is not created \n");
            }
            else
            {
                Ichoice=InsertMenu();
            }
            
            break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            break;
        default:
           printf("\aWrong Choice\nTry Again..\n");
           //sleep("5");
       }

    }
    
    return 0;
}
