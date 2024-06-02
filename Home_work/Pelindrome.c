#include<stdio.h>
int main()
{
	int n,x1,x2,x3,x4,x5,x6,x7,x8,x9,x0;
	printf("\n Enter a Number :");
	scanf("%d",&n);
	if(n>0)
		{
			x1=n%10;
			x2=x1%100;
			x3=x2%1000;
			/*x4=x3%10000;
			x5=x4%100000;
			x6=x5%1000000;
			x7=x6%10000000;
			x8=x7%100000000;
			x9=x8%1000000000;
			x0=x9%10000000000;*/
			
			//if(x1==x0 && x2==x9 && x3==x8 && x4==x7 && x5==x6 && x6==x5 && x7==x4 && x8==x3 && x9==x2 && x0==x1)
			if(x1==x3 && x2==x2 && x3==x1)
				printf("\n %d is a Pelindrome Number \n",n);
			else
				printf("\n %d is not a Pelindrome Number \n",n);

		}
	else
		printf("\n %d is not Valid Number \n",n);

	return 0;
}
