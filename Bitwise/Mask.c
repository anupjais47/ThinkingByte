#include<stdio.h>
int main( )
{
	int a,bit,mask=0x20;
	printf ("Enter an integer : ") ;
	scanf ("%d",&a) ;
	printf("a = %d\t",a);
	//bit_pattern(a);
	if ((a&mask) == 0)
	{
		bit=0;
		printf("Anup");
	}
	else
		bit=1;
	printf("\n5th bit is %d\n",bit);
	return 0;
}
