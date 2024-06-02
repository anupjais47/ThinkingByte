/*
Purpose:-To Convert into Fahrenhiet from Celcius.
Author:-Anup Kumar.
Date of Creation:-04/APR/2019
Date of Modification:-
Regards:-Er.K.K.Sir & Er.Vikash Sir.
*/
#include<stdio.h>
int main()
{
	float n;
	printf("Enter The Temprature in Celsius :");
	scanf("%f",&n);
	printf("%.1f is Fahrenhiet Value of %.1f Celsius \n",(n-32)*5/9,n);
	return 0;
}
