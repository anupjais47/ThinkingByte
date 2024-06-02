#include<stdio.h>
int main()
{
	int a,b,c,large;
	printf("\n Enter three numbers a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		{
			if(a>c)
				large=a;
			else
				large=c;
		}
	else
		{
			if(b>c)
				large=b;
			else
				large=c;
		}
	
	printf("\n largest number among three nos = %d \n",large);
	return 0;
}
