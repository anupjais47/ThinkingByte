#include<stdio.h>
#define SIZE 100
int main()
{
	int num[SIZE],i,ele,length=0;
	char choice;
	//while(length<SIZE)
	while(1)
		{
			//printf("Enter Y for continue or N for stop  ");
			printf("Enter your choice 'Y' for continue or 'N' for stop  ");
			choice=getchar();
			if(choice=='Y' || choice=='y')
				{
					printf("Enter the number :");
					scanf("%d",&ele);
					for(i=length; i>0 && num[i-1]>ele; i--)
						{
							num[i]=num[i-1];
						}
					num[i]=ele;
					length++;
				}
			else if(choice=='N' || choice=='n')
				{
					break;
				}
			/*else
				{
					printf("Error\n");
				}*/
		}
	printf("\n The data element in array are ");
	for(i=0; i<length; i++)
		{
			printf("%d\t",num[i]);
		}
	printf("\n");
	return 0;
}
