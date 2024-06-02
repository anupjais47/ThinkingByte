/*
Purpose:-To Change The Case of an Alphabet.
Author:-Anup Kumar.
Date of Creation:-04/APR/2019
Date of Modification:-
Regards:-Er.K.K.Sir & Er.Vikash Sir.
*/
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter an Alphabet :");
	scanf("%c",&ch);
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		if(ch>='A' && ch<='Z')
			{
				printf("%c \n",ch+32);
			}
		else
			{
				if(ch>='a' && ch<='z')
					printf("%c \n",ch-32);
			}
	}
	else
		printf("\n %c is not an Alphabet \n",ch);
	return 0;
}
