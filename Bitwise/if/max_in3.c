/* Purpose:-Maximum And Minimum Number is 5 numbers
	Author:-Anup jaiswal
	Date of creation:-03/APR/2019
	Date of modification:-
*/
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter Three Numbers:-");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		{
			if(a>c)
				max=a;
			else
				max=c;
		}
	else
		{
			if(b>c)
				max=b;
			else
				max=c;
		}
	printf("Maximum = %d \n",max);
	return 0;
}
