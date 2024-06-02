#include<stdio.h>
int main()
{
	unsigned int num;
	printf("Enter a number : ");
	scanf("%u",&num);
	printf("Octal equivalent num of %d = %o\n",num,num);
	return 0;
}
