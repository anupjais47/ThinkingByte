#include<stdio.h>
int main()
{
	int i,j,k,m;
	printf("Enter the number of row :");
	scanf("%d",&k);
	for(i=1; i<=10; i++)
		{
			for(j=1; j<=k; j++)
				{
					printf("%d\t",j*i);
				}
				printf("\n");
		}
	return 0;
}
