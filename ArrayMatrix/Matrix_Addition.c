/*
	ADT MATRIX ADDITION
1.purpose:-Addition of Two Matrices.
2.Pre-condition:-Matrices Must Be Same Order.
3.Input:-Order of Matrices After That Their Element.
4.Output:-A Matrix Which is The Addition of Two Matrices.
5.Post-condition:-None.
6.Author:-Anup Kumar.
7.Date_of_Creation:-09-JULY-2019.
8.Date_of_Modification:-None.
9.Regards:-Mr.Anup Sir.

*/
#include<stdio.h>
int main()
{
	unsigned int l,m,n,p;
	int i,j,a[10][10],b[10][10];
	printf("Enter the order of frist matrix  : ");
	scanf("%u%u",&m,&n);
	printf("Enter the order of second matrix : ");
	scanf("%u%u",&l,&p);
	if(m==l && n==p)
		{
			for(i=0; i<m; i++)
			for(j=0; j<n; j++)
				{
					printf("Enter the element at %d,%d position of frist matrix  : ",i,j);
					scanf("%d",&a[i][j]);
					printf("\n");
				}
			for(i=0; i<m; i++)
			for(j=0; j<n; j++)
				{
					printf("Enter the element at %d,%d position of second matrix : ",i,j);
					scanf("%d",&b[i][j]);
					printf("\n");
				}
			printf("Addition of both matrices is ...\n");
			for(i=0; i<m; i++)
				{
					printf("\n");
					for(j=0; j<n; j++)
						{
							printf("%d\t",a[i][j]+b[i][j]);
						}
				}
			printf("\n");
		}
		
	else
		printf("\aThe addition of those matrices is not possible.\n");
	return 0;
}
