#include<stdio.h>
int main()
{
	int a,i=0;
	printf("Enter a number to print 0 to entered number : ");
	scanf("%d",&a);
	for(i; i<=a; i++)
	{
		printf("%d\t",i);
		i++;
	}
	printf("\n");
	return 0;
}
