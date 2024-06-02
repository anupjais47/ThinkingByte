#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter a Positive Number :");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("\a%d is not a Positive Integer \n",n);
	}
	/*if(n==0)
	{
		printf("\a%d is not a Positive Integer \n",n);
	}*/
	else
	{
		while(i<=n)
		{
			printf("%d\t",i++);
			//i++;
		}
		//printf("\n");
		while(n>=i)
		{
			printf("%d\t",n--);
			//n--;
		}
		printf("\n");
	}
	return 0;
}
