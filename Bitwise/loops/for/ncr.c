#include<stdio.h>
int main()
{
	int n,r,i,j,k=n-r,NCR,fact_n=1,fact_r=1,fact_n_r=1,count=1;
	printf("Enter The Power :");
	scanf("%d",&n);
	if(n>=0)
		{
			for(i=2; i<=n; i++)
				fact_n=fact_n*i;
			for(r=n; r<n; r--)
				fact_r=fact_r*r;
			for(j=2; j<=k; j++)
				fact_n_r=fact_n_r*j;
			NCR=fact_n/(fact_n_r*fact_r);
			printf("Factorial of %d = %d\n",n,NCR);
		}
	else
		{
			printf("Factorial of %d is not Possible \a\n",n);
		}
	return 0;
}
