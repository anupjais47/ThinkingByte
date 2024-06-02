/*
	ADT InputValue
1.purpose:-To Check Input Value into Array and Display.
2.Pre-condition:-Number should be greater than or equal to 0.
3.Input:-Values into Array.
4.Output:-Display The Value.
5.Post-condition:-none.
6.Author:-Anup Kumar.
7.Date_of_Creation:- 23-APR-2019
8.Date_of_Modification:-
9.Regards:-Er.Vikash Sir.
*/
#include<stdio.h>
int main()
{
	int arr[5],i;
	for(i=0; i<5; i++)
		{
			printf("Enter a value for arr[%d]:",i);
			scanf("%d",&arr[i]);
		}
	printf("The Array Elements are : \n");
	for(i=0; i<5; i++)
		{
			printf("%d\t",arr[i]);
		}
	printf("\n");
	return 0;
}
