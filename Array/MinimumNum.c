#include<stdio.h>
int main()
{
	int num[44],i,max,min;
	//printf("Enter a number :");
	for(i=0; i<10; i++)
		{
			printf("Enter a number :");
			scanf("%d",&num[i]);
		}
	min=0;
	for(i=1; i<10; i++)
		{
			if(num[i]<min)
				{
					min=num[i];
				}
		}
	printf("The Smallest Number is %d\n",num[i]);
	return 0;
}
