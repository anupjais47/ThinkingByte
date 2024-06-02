#include<stdio.h>
#include<ctype.h>
#define SIZE 5
int main()
{
	int i=0;
	char arr[SIZE],ch,ch2;
	printf("Enter an string :- ");
	//scanf("%[^\n]s",arr);
	scanf("%s",arr);
	while(arr[i]!='\0')
		{
			if(arr[i]!=arr[0])
				{
					//ch=arr[i]+32;
					ch=tolower(arr[i]);
					i++;
				}
			else
				{
					//ch=arr[i]-32;
					ch2	=toupper(arr[i]);
				}
			
		}
	printf("The string is %s \n",arr);
	return 0;
}
