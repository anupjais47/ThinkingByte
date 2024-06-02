/*
Purpose:-To Caculat Compound Interest.
Author:-Anup Kumar.
Date of Creation:-04/APR/2019
Date of Modification:-
Regards:-Er.K.K.Sir & Er.Vikash Sir.
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int p,r,t,ci;
	printf("Enter Principal, Rate, Time :");
	scanf("%d%d%d",&p,&r,&t);
	ci=pow(1+(r/100),t)*p+p;
	printf("CI is = %d \n",ci);
	return 0;	
}

