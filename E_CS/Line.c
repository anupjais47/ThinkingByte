#include <stdio.h>
int main()
{
	printf("A\n");
	#line 100
	printf("B\n");
	printf("C FILE %s \t LINE %d\n", __FILE__, __LINE__ );
	//printf("D\n");
	#line  200
	printf("D\t");
	printf("E\n");
	printf("Anup Jaiswal\n");
	printf("D FILE %s \t LINE %d\n", __FILE__, __LINE__ );
	return 0;
}
