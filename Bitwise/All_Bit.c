#include<stdio.h>
int main( )
{
	int a,bit,mask=0x20;
	printf ("Enter an integer : ") ;
	scanf ("%d",&a) ;
	printf("a = %d\n",a);
	printf("a = %X\n",a);
	
	printf("mask = %d\n",mask);
	printf("mask = %X\n",mask);
	
	printf("a&mask = %d\n",a&mask);
	printf("a&mask = %X\n",a&mask);
	
	printf("a|mask = %d\n",a|mask);
	printf("a|mask = %X\n",a|mask);
	
	printf("a^mask = %d\n",a^mask);
	printf("a^mask = %X\n",a^mask);
	
	printf("~a = %d\n",~a);
	printf("~a = %X\n",~a);
	
	printf("~mask = %d\n",~mask);
	printf("~mask = %X\n",~mask);
	
	//printf("5th bit is %d\n",bit);
	//printf("5th bit is %X\n",bit);
	return 0;
}
