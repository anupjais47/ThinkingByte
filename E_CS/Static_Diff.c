#include <stdio.h>
void f2();
int g = 10;
int main()
{
	//system("clear");  2
	int i =0,j=10;
	/*void f1();
	f1();
	printf("after first call \n");
	f1();
	printf("after second call \n");
	f1();
	printf("after third call \n");*/
	for(; i<10&&j>=0; i++,j--)
	{
		void f1();
		f1();
		printf("After %d Call \t",i);
		f2();
		printf("After %d Call \n",j);
	}
	return 0;
}
void f1()
{
	//system("clear");  1
	static int k=0;
	int j = 10;
	printf("value of k = %d & j = %d ",k,j);
	k=k+10;
}
void f2()
{
	//system("clear");  1
	static int l=0;
	int m = 10;
	printf("value of l = %d & m = %d ",l,m);
	l=l+10;
}
