#include<stdio.h>
int main()
{
	unsigned int d,m,y,flag,h,z;
	printf("Enter a date (dd/mm/yy) : ");
	scanf("%u/%u/%u",&d,&m,&y);
	flag=1;
	if(m==9 && y==1752)
		{
			if(d>2 && d<14 || d>30)
				flag=0;
		}
	else if(m==2)
		{
			if(d==29)
				{
					if(y<1753)
						{
							if(y%4!=0)
								flag=0;
						}
					else
						{
							if(y%100==0)
								{
									if(y%400!=0)
										flag=0;
								}
							else
								{
									if(y%4!=0)
										flag=0;
								}
						}	
				}
			else if(d>29)
				{
					flag=0;
				}
			
		}
	else if(m==4 || m==6 || m==9 || m==11)
		{
			if(d>30)
				flag=0;
		}
	else if(m>12)
		{
			flag=0;
		}
	else
		{
			if(d>31)
				flag=0;
		}
	if(flag==1)
		printf("%u/%u/%u is a Valid_Date.\n",d,m,y);
	else
		printf("\a%u/%u/%u is not a Valid_Date.\n",d,m,y);
	return 0;	
}
