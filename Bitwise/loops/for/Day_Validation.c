#include<stdio.h>
int IsValid(int d, int m, int y)
{
	int flag=1;
	if(m==9 && y==1752)
		{
			if(d>3 && d<13 || d>30)
				flag=0;
		}
	else if(m==2)
		{
			if(y<1753)
				{
					if(y%4!=0 && d>28)
						flag=0;
					else
						if(d>29)
							flag=0;
				}
			else
				{
					if(y%100==0)
						{
							if(y%400!=0 && d>28)
								flag=0;
							else
								if(d>29)
									flag=0;
						}
					else
						{
							if(y%4!=0 && d>28)
								flag=0;
							else
								if(d>29)
									flag=0;
						}
				}

		}
	else if(m==4 || m==6 || m==9 || m==11)
		{
			if(d>30)
				flag=0;
		}
	else
		{
			if(m>12 || d>31)
				flag=0;
		}
	return flag;
}
int main()
{
	int dd,mm,yy,i;
	//printf("Enter a date(dd/mm/yy) : ");
	//scanf("%d/%d/%d",&dd,&mm,&yy);
	for(yy=0; yy<3000; yy++){
		for(mm=0; mm<13; mm++){
			for(dd=0; dd<31; dd++)
				{
					if(dd,mm,yy>0)
						{
							i=IsValid(dd,mm,yy);
						}
					else
						{
							printf("\aThe Date is Not Valid.\n");
								//_Exit;
						}
					if(i==0)
						{
							printf("\aThe Date(%d/%d/%d) is Not Valid.\n",dd,mm,yy);
						}
					else
						{
							printf("The Date(%d/%d/%d) is Valid.\n",dd,mm,yy);
						}
				}
			}
		}
	/*if(dd,mm,yy>0)
		{
			i=IsValid(dd,mm,yy);
		}
	else
		{
			printf("\aThe Date is Not Valid.\n");
				_Exit;
		}
	if(i==0)
		{
			printf("\aThe Date(%d/%d/%d) is Not Valid.\n",dd,mm,yy);
		}
	else
		{
			printf("The Date(%d/%d/%d) is Valid.\n",dd,mm,yy);
		}*/
	return 0;
}
