#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		if(i==2 || i==3 || i==5 || i==7)
			count++;
		n=n/10;
	}
	printf("Count= %d\n",count);
	return 0;
}
