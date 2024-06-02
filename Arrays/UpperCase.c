#include<stdio.h>
#define SIZE 10
int main()
{
	int i=0,j;
	char arr[SIZE];
	printf("Enter an string :");
	scanf("%[^\n]s",arr);
	//while(arr[i]!='\0')
	for(j=0; arr[i]!='\0'; j++ )
		{
			if(arr[i]==' ');
				//i++;
			else if(arr[i]>='A' && arr[i]<='Z');
				//i++;
			else if(arr[i]>='a' && arr[i]<='z')
				i-=32;
		}
	printf("The String is in UPPER CASE %s	\n",arr);
	return 0;
}
