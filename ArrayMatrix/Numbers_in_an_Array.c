#include<stdio.h>
int main()
{
	int a[10],i;

	for(i=1; i<=10; i++)
		{
			printf("Enter %d no: ",i);
			scanf("%d",&a[i]);
		}
	printf("Entered numbers are ...\n");
	for(i=1; i<=10; i++)
		{
			printf("%d\t",a[i]);

		}
	printf("\n");
	
	return 0;
}
