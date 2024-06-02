#include <stdio.h>
#define add(x1, y1) x1+y1
#define mult(x1, y2) x1*y2
int main()
{
	system("clear");
	int a,b,c,d,e;
	a = 2;
	b = 3;
	c = 4;
	d = 5;
	printf("a = %d \t b = %d \nc = %d \td = %d \n",a,b,c,d);
	printf("a+b = %d \tc+d = %d \n",add(a, b), add(c, d));
	printf("Addition of %d & %d is %d \n",add(a, b), add(c, d),add(add(a, b), add(c, d)));
	/*e = mult(add(a, b), add(c, d));
	printf("a+b = %d \tc+d = %d \n",add(a, b), add(c, d));
	printf ("Multiply of %d & %d is %d\n",add(a, b), add(c, d),e);
	
	/*printf("Enter fourth numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("Multiply of %d & %d is %d\n",mult(a, b), mult(c, d),mult(mult(a, b), mult(c, d)));*/
	//e = mult(add(a, b), add(c, d));
	printf("Multiply of %d & %d is %d \n",add(a, b), add(c, d),mult(add(a, b), add(c, d)));
	return 0;
}
