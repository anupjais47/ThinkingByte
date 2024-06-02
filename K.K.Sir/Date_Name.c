#include<stdio.h>
//void Date(int n);
//void Month(int h);
int IsLeap(int k);
//int ValidDate(int a, int b, int c);
int main()
{
	/*unsigned*/ int d,m,y;
	printf("Enter a date in the form of (dd/mm/yy) : ");
	scanf("%u%u%u",&d,&m,&y);
	if(d<32 && m<13)
		{
			if(ValidDate(d,m,y)==1)
					printf("The Date is : \n %u-%u-%u\n",Date(d),Month(m),y);
			else
				printf("\a SORRY THE DATE IS NOT VALID \n");
		}
	else
		{
			printf("\a SORRY THE DATE OR MONTH IS NOT VALID \n");
		}

	return 0;
}
int ValidDate(int a, int b, int c)//To Check Date Validation.
{
	int valid=1;
	if(c==1752 && b==9)
		{
			if(a<2 && a>14)
				valid=0;
		}
	else if(b==2)
		{
			IsLeap(c);
			if(IsLeap==1)
				{
					if(a>29)
						valid=0;
				}
		}
	else if(b==4 || b==6 || b==9 || b==11)
		{
			if(b>30)
				valid=0;
		}
	else if(b== 1 || b==3 || b==5 || b==7 || b==8 || b==10 || b==12)
		{
			if(a>31)
				valid=0;
		}	
	else
		valid=0;
	return valid;
}
void Date(int n)//To Print Position of The Day.
{
	if(n==1 || n==21 || n==31)
		{
			printf("%dst",n);
		}
	else if(n==2 || n==22)
		{
			printf("%dnd",n);
		}
	else if(n==3 || n==13 || n==23)
		{
			printf("%drd",n);
		}
	else
		{
			printf("%dth",n);
		}
	return n;
}
void Month(int h)//To Print Month Name AS JAN,MAY,DEC...
{
	switch(h)
		{
			case 1:
				{
					printf("JAN");
					break;
				}
			case 2:
				{
					printf("FEB");
					break;
				}
			case 3:
				{
					printf("MAR");
					break;
				}
			case 4:
				{
					printf("APR");
					break;
				}
			case 5:
				{
					printf("MAY");
					break;
				}
			case 6:
				{
					printf("JUNE");
					break;
				}
			case 7:
				{
					printf("JULY");
					break;
				}
			case 8:
				{
					printf("AUG");
					break;
				}
			case 9:
				{
					printf("SEP");
					break;
				}
			case 10:
				{
					printf("OCT");
					break;
				}
			case 11:
				{
					printf("NOV");
					break;
				}
			default:
				printf("DECEMBER");		
		}
	return h;
}
int IsLeap(int k)//To Check Leap Year.
{
	int flag=1;
	if(k>1753)
		{
			if(k%4!=0)
				flag=0;
		}
	else
		{
			if(k%100==0)
				{
					if(k%400!=0)
						flag=0;
				}
			else
				{
					if(k%4!=0)
						flag=0;
				}
		}
	return flag;
}
