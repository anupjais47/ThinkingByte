#include<stdio.h>
int main()
{
	char charVal;
	unsigned char uCharVal;
	
	short shortVal;
	unsigned short uShortVal;
	
	int intVal;
	unsigned int uIntVal;
	
	long longVal;
	unsigned long uLongVal;
	
	long long longLongVal;
	unsigned long long uLongLongVal;
	
	float floatVal;
	double doubleVal;
	long double longDoubleVal;
	
	printf("Enter a Character : ");
	charVal=getchar();
	getchar();
	
	printf("Enter Another Character : ");
	uCharVal=getchar();
	getchar();
	
	printf("Enter a signed short value : ");
	scanf("%hi",&shortVal);
	
	printf("Enter an unsigned short value : ");
	scanf("%hu",&uShortVal);
	
	printf("Enter a signed integer value : ");
	scanf("%d",&intVal);
	
	printf("Enter an unsigned integer value : ");
	scanf("%lu",&uIntVal);
	
	printf("Enter a signed long value : ");
	scanf("%ld",&longVal);
	
	printf("Enter an unsigned long value : ");
	scanf("%lu",&uLongVal);
	
	printf("Enter a signed long long value : ");
	scanf("%lld",&longLongVal);
	
	printf("Enter an unsigned long long value : ");
	scanf("%llu",&uLongLongVal);
	
	printf("Enter a float value : ");
	scanf("%f",&floatVal);
	
	printf("Enter a double value : ");
	scanf("%lf",&doubleVal);
	
	printf("Enter a long double value : ");
	scanf("%Lf",&longDoubleVal);
	
	printf("\nYou entered character\t : '%c'\n",charVal);
	printf("You entered unsigned character : '%c'\n\n",uCharVal);
	
	printf("You entered signed short \t: %hi\n",shortVal);
	printf("You entered unsigned short \t: %hi\n",uShortVal);
	
	printf("You entered signed int \t: %d\n",intVal);
	printf("You entered unsigned int \t: %lu\n\n",uIntVal);
	
	printf("You entered signed long \t: %ld\n",longVal);
	printf("You entered unsigned short \t: %lu\n\n",uLongVal);
	
	printf("You entered signed long long \t\t: %lld\n",longLongVal);
	printf("You entered unsigned long long\t\t : %llu\n\n",uLongLongVal);
	
	printf("You entered float\t\t : %f\n",floatVal);
	printf("You entered double \t\t: %lf\n",doubleVal);
	printf("You entered long doublr\t\t : %Lf\n",longDoubleVal);
	
		
	return 0;
}
