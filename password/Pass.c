#include<stdio.h>
// #include<conio.h>
#include<math.h>
#include <unistd.h>
/*void readPassword(char pass[])
{
	char ch; int i=0;
	while(1)
	{
		ch = getch();		
		if(ch==8 && i>0)
		{
			printf("\b \b");
			i--;
		}		
		else if(ch==13)
		{
			break;
		}
		else
		{
			printf("*");
			pass[i]=ch;
			i++;
		}
	}
	pass[i]='\0';
}*/

int main()
{
	char pwd[9];
    int i;
    // clrscr();

    printf("Enter Password: ");
    for (i = 0; i < 8; i++) 
	{
        pwd[i] = getch();
        // pwd[i] = getc();
 	    printf("*");
    }
    pwd[i] = '\0';
    printf("\n");

    printf("Entered password: ");
    for (i = 0; pwd[i] != '\0'; i++)
        printf("%c", pwd[i]);
    getch();
	// getc();
	/*printf("Enter your password : ");
	readPassword(char pass[]);*/
	return 0;
}