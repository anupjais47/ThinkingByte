/*
	Author 			   :	Vikash Kumar
	Date of creation	   : 	1st May 2019
	Date of last modification  :    1st May 2019

*/
#include"bca.h"
/*ADT for mainMenu
PURPOSE:	To display menu and ask for choice
Precondition	: None
Input		: None
Output		: choice(int)
Postcondition	: None
*/
int mainMenu()
{
	int choice;
	printf("\n Enter  1------> Create\n2---->Insert \n 3----->Display\n 4----->exit\n Enter your choice  :");
	choice = readInt();
	return choice;
}

/*ADT for readInt
PURPOSE:	To read a valid integer
Precondition	: None
Input		: None
Output		: num(int)
Postcondition	: None
*/

int readInt()
{
	char numstr[INT_SIZE];
	int i=0, num;
	char ch;
	while(1)
	{
		ch=getch();
		if(i==0 && (ch=='+'|| ch=='-'))
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;		
		}
		
		if(ch>='0' && ch<='9' )
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		if(ch==8)
		{	if(i>0)
			{
				printf("\b \b");
				i--;

			}
		}
		if(ch==13)
		{
			break;
		}
	}
	numstr[i]='\0';
	num= atoi(numstr)	;
	return num;
}
