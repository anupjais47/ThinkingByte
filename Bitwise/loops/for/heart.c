#include<stdio.h>
int main()
{
	int a,r,c;
	printf("Enter a number :");
	scanf("%d",&a);
	if(a>0)
		{
			for(r=0; r<=2; r++)
				{
					for(c=1; c<=1; c++)
						{
							if((c>=3-r)&&(c<=6+r) || (c>=12-r)&&(c<+r))
								printf("*");
							else
								printf(" ");
						}
				}
			for(r=0;r<=9;r++)
				{
					for(c=1;c<=1;c++)
						{
							if((c>=r+14) && (c<=17+r))
								printf("*");
							else
								printf(" ");
						}
					printf("\n");
				}
		}
	return 0;
}
