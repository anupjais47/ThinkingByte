#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void print_info();
void delay(int milli_seconds) ;
int main()
{
	int i;
	printf("\n Welcome to Our Program \n Developed by:-");
	print_info();
	printf("\nOur Programe is running Please wait \n");
	printf("%ld",clock());
	for(i=0; i<=100; i++)
		{
			delay(100);
			//suspand(10);
			printf("_");
		}
	printf("\n Thank You for using my Program\n");
	print_info();	
	return 0;
}
void print_info()
{
	printf(" Anup Jaiswal ");
	printf("Add:-MJK College Bettiah\n ");
	printf(" cont:-########## \n");
		
	
}

void delay(int milli_seconds) 
{ 
    // Converting time into milli_seconds 
    //int milli_seconds = 1000 * number_of_seconds; 
  
    // Stroing start time 
    clock_t start_time = clock(); 
  
    // looping till required time is not acheived 
    while (clock() < start_time + milli_seconds) 
        ; 
} 
