#include<stdio.h>
#define SIZE 100
int main()
{
	int num[10],i,odd=0,even=0,n;
	printf("Enter how many numbers you want to enter : \n");
	scanf("%d",&n);
	if(n>SIZE)
	{
		printf("\n Sorry unable to process\n");
	}
	else
	{
	for(i=0; i<SIZE; i++)
		{
			printf("Enter a number :");
			scanf("%d",&num[i]);
		}
	for(i=0; i<SIZE; i+2)
		{
			odd=odd+num[i];	
		}
	for(i=1; i<10; i+2)
		{
			even=even+num[i];	
		}
	printf("Sum of even number = %d\nSum of odd number = %d\n",even,odd);
	}
	return 0;
}
