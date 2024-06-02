#include<stdio.h>
#include<stdlib.h>
#define FLOAT_SIZE 20
int readFloat()
{
	char numstr[FLOAT_SIZE];
	int i=0, count=0;
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
		else if(ch>='0' && ch<='9' )
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
		}
		else if(ch==8)
		{
			printf("\b \b");
			i--;
		}
		else if (ch=='.'&&count<1)
		{
			printf("%c",ch);
			numstr[i]=ch;
			i++;
			count++;
		}
		else if(ch==13|| ch==32)
		{
			break;
		}
	}
	numstr[i]='\0';
	return atof(numstr);
}

int main()
{
	float num;
	printf("\n Enter a number : ");
	num= readFloat();
	printf("\n The num = %f",num);
	return 0;
	
}
