#include<stdio.h>
int main()
{
	int r,c,n;
	printf("Enter a number :");
	scanf("%d",&n);
	for(r=1; r<=5; r++)
		{
			for(c=r; c>=1; c--)
				{
					printf("%d\t",c%2);
					printf("\n");
				}
		}
	printf("\n");
	return 0;
}
