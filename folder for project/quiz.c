#include"quiz.h"
/*ADT for UserMenu 
purpose		:--Create a UserMenu about user;
preconditio :--none
input 		:--choice(int);
output 		:--choice(int);
postcondition:--none
*/
int MainMenu()
{
	int choice;
	printf("\n 1-->Introduction \n 2-->User \n 3-->Start Game \n 4-->display Resault \n 5-->Terminating \n 0-->exit");
	scanf("%d",&choice);
	return choice;
}
/*ADT for MainMenu 
purpose		:--Create a MainMenu about Quize game;
preconditio :--none
input 		:--
output 		:--
postcondition:--none
*/
int UserMenu()
{
	int choice;
	printf("\n 1-->Sign up \n 2-->Sign in\n 0-->exit");
	scanf("%d",&choice);
	return choice;
}
/*ADT for Sign in; 
purpose		:--Create ID for Sign in;
preconditio :--none
input 		:--
output 		:--
postcondition:--none
*/
int SignIn()
{
	int choice;
	printf("\n 1-->Read user detail \n 2-->Authentic\n 0-->exit");
	scanf("%d",&choice);
	return choice;
}
/*ADT for start game; 
purpose		:--play game;
preconditio :--none
input 		:--
output 		:--
postcondition:--none
*/
int StartGame()
{
	int choice;
	printf("\n 1-->Display Rule \n 2-->Question Slection \n 3-->Record Responce \n 0-->Exit");
	scanf("%d",&choice);
	return choice;
}
/*ADT record responce; 
purpose		:--recording data which is playing by user;
preconditio :--none
input 		:--
output 		:--
postcondition:--none
*/
int RecordResponce()
{
	int choice;
	printf("\n 1-->Valid Responc \n 2-->calculate score \n 0-->Exit");
	scanf("%d",&choice);
	return choice;
}
