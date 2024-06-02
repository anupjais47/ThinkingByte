#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,n,c;
	printf("\n Enter a,b and n :");
	scanf("%d%d%d",&a,&b,&n);
	if(n>0)
		{
			c=pow(a,n)+pow(b,n)+n*pow(a,n)*pow(b,0)+n*pow(a,n-1)*pow(b,1)+n*pow(a,n-2)*pow(b,2)+n*pow(a,n-3)*pow(b,3)+n*pow(a,n-4)*pow(b,4);
		printf("\n %d",c);
		}
	return 0;
}
