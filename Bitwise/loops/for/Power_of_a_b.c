#include<stdio.h>
int main()
{
	int n,i,count=1,fact_n=1,fact_i=1,fact_n_i=0,nci=NCR(n,i),y;
	printf("Enter The Power :");
	scanf("%d",&n);
	if(n>0)
		{
			for(i=0; i<=n; i++)
				{
					
					if(count>1)
						printf("+");
					//nci=NCR(n,i);
					//y=nci;
					if(nci!=1)
						printf("%d",nci);
					y=n-i;
					if(y!=0)
						printf("a");
					if(y>1)
						printf("[^%d]",n-i);
					if(i!=0)
						printf("b");
					if(i>1)
						printf("[^%d]",i);
					count++;
				}
		}
	return 0;
}
