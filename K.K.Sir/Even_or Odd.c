/*
Purpose:-To Check The Given Number is Odd or Even.
Author:-Anup Kumar.
Date of Creation:-04/APR/2019
Date of Modification:-
Regards:-Er.K.K.Sir & Er.Vikash Sir.
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a Number :");
	scanf("%d",&n);
	if(n%2==0)
		{
			printf("%d is an Even \n",n);
		}
	else
		{
			printf("%d is an Odd \n",n);
		}
	return 0;
}
