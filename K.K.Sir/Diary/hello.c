#include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("\n Hello world ");
	
	system("cls");
	printf("\n type your program here and press CTRL+Z to compile and run\n\n ");
	
	system("copy con anjali.c");
	system("gcc -c anjali.c");
	system("gcc anjali.o -o a.exe");
	printf("\n Output is \n ");
	system("a.exe");
	//printf("\n The content of the file is\n\n");
	//system("type anjali.txt");
	return 0;
}