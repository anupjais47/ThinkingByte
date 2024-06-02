#include<stdio.h>
int main()
{
	int m;
	printf("Enter a numbr:-");
	scanf("%d",&m);
	if(m>=10 && m<=90)
		{
			return(m);
		}
	else
		{
			return(m+32);
		}
	//return 0;
}
