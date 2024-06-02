#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,uid=1125,Pass=2349,uid1,Pass1,count=0;
	do
	{
		system("clear");
		if(count>0)
		{
			printf("Invalid User id or Password  \n");
		}
		if(count==3)
		{
			printf("Your Trial Limit Has Finished \a\n");
			break;
		}
		printf("Enter User Id \n");
		scanf("%d",&uid1);
		printf("Enter Password \n");
		scanf("%d",&Pass1);
		count++;
	}while(!(uid1==uid && Pass1==Pass) && count<=3);
	printf("Welcome To My Program \n");
	return 0;
}
