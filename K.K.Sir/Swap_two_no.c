/*
Purpose:-Swap Two Numbers Without Taking Extra Variable.
Author:-Anup Kumar.
Date of Creation:-04/APR/2019
Date of Modification:-
Regards:-Er.K.K.Sir & Er.Vikash Sir.
*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter Two Numbers :");
	scanf("%d%d",&a,&b);
	system("clear");
	printf("Entered Numbers are %d And %d for Swaping...\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The Swaped Numbers are %d and %d \n",a,b);
	return 0;
}
