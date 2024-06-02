#include<stdio.h>
//#include<math.h>
#include<stdlib.h>
int main()
{
	register int i,n,a,rev=0,num;
	printf("Enter a number till than check armstrong :");
	scanf("%d",&n);
	for(i=100; i<=n; i++)
		{
			num=n;
			while(i>0)
				{
					a=i%10;
					rev=rev+(a*a*a);
					//rev=rev+(i%10)*(i%10)*(i%10);
					i=i/10;
				}
			if(i==rev)
				{
					printf("%d is an armstrong\n",i);
				}
			
		}
	return 0;
}
