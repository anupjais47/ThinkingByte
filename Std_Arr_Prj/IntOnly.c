# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>
# include <termios.h>
#define SIZE 10
char getch(void)
{
	struct termios old, new;
	char ch;
	tcgetattr(0, &old);
	new=old;
	new.c_lflag &= ~( ICANON | ECHO );
	tcsetattr( 0, TCSANOW, &new);
	ch=getchar();
	tcsetattr(0, TCSANOW, &old);
	return(ch);
}
/*int main()
{
	char k;
	//int c[10];
	int c;
	printf("Enter Only Number : ");
	do
	{
		k = getch();
		if(k>='0' && k<='9')
		{
			//c[i]=(k-48);
			c=(k-48);
			printf("%d",c);
			//i++;
		}
		if(k=='\n')
			break;
		else
			printf(" \b");
	}while(1);
	printf(" \n");
}*/
int main()
{
	int numstr[SIZE],i=0;
	char ch;
	while(i<=SIZE)
	{
		ch=getch();
		if(i==0 && (ch=='+' || ch=='-'))
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		else if(ch>='0' && ch<='9')
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		else if(ch==10)
		{
			if(i>0)
				printf("\b\b");
				i--;
		}
		else if(ch=='\n')
		{
			break;
		}
	}
	return atoi(numstr);
}
