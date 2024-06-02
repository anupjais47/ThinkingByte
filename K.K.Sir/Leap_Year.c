#include<stdio.h>
int IsLeap(int z);
int main()
{
	int m,j,y,df=0;
	printf("Enter a date(dd/mm/yy) : ");
	scanf("%d/%d/%d",&d,&m,&y);
	
	/*if(IsLeap(z)==1)
		{
			printf("%d is a leap year. \n",z);
		}
	else
		printf("\a %d is not a leap year. \n",z);
	*/
	if(m==2)
		{
			if(IsLeap(z)==1)	
		}
	return 0;
}
int IsLeap(int z)
{
	int f=0;
	if(y<1753)
		{
			if(y%4==0)
				f=1;
		}
	else
		{
			if(y%100==0)
				{
					if(y%400==0)
						f=1;
				}
			else
				{
					if(y%4==0)
						f=1;
				}
		}
	return f;
}
