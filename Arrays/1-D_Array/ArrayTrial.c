#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
//getchar();
int MainMenu();
void Terminate();
void cls();
void invalid();
//#include"array.h"
int main()
{
	int choice;

	while(1)
	{
		choice=MainMenu();
		switch(choice)
		{
			case 0:
				cls();
				Terminate();
			case 1:
				cls();
				printf("Create Function is coming soon..\n");
				break;
			case 2:
				cls();
				printf("Insert Function is coming soon..\n");
				break;
			case 3:
				cls();
				printf("Display Function is coming soon..\n");
				break;
			case 4:
				cls();
				printf("Search Function is coming soon..\n");
				break;
			case 5:
				cls();
				printf("Delete Function is coming soon..\n");
				break;
			case 6:
				cls();
				printf("Sort Function is coming soon..\n");
				break;
			case 7:
				cls();
				printf("Merge Function is coming soon..\n");
				break;
			default :
				invalid();
			
		}
	}
}
//#include"array.h"
void cls()
{
	system("clear");
}
void invalid()
{
	printf("\aInvalid Option \n");
}
int MainMenu()
{
	//cls();
	int choice;
	printf("\t*****************************************\n\t|\tWELCOME TO MY PROGRAM\t\t| \n\t --------------------------------------- \n\t|\t Choose Your Option \t\t| \n\t*****************************************\n");

	printf(" 1. Create \n 2. Insert \n 3. Display \n 4. Search \n 5. Delete \n 6. Sort \n 7. Merge \n 0. EXIT \n\t\t :: ");
	scanf("%d",&choice);
	
}
void Terminate()
{
	printf("\n\t\t**********************************\n\t\t| Thank You for Using My Program | \n\t\t --------------------------------\n\t\t|\t Visit Again..😊️😊️😊️\t | \n\t\t**********************************\n");
	exit;
}
