#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("Enter Three number:");
	scanf("%d%d%d",&a,&b,&c);
	max=a;min=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	if(b<min)
		min=b;
	if(c<min)
		min=c;
	/*if(a>b)
		{
			if(a>c)
				{
					max=a;
					min=c;
				}
			else
				{
					max=c;
					min=a;
				}
		}
	else
		{
			if(b>c)
				{
					max=b;
					min=c;
				}
			else
				{
					max=c;
					min=b;
				}
		}*/
	printf("Maximum = %d \nMinimum = %d \n",max,min);
	return 0;
}
