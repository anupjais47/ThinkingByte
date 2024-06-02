#include<stdio.h>
#define SIZE 4
int main()
{
	//int num[SIZE],i,odd=0,even=0,count=0;
	int num[SIZE],i,max,n;
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
	max=num[i];
	for(i=0; i<SIZE; i++)
		{
			//if(num[i]%2!=0)
			if(num[i]>max)
				{
				max=num[i];
				}
		}
	//printf("Total even number = %d\nTotal odd number = %d\n",even,odd);
	printf("The Highest value placed = %d\n",num[i]);
	}
	return 0;
}
