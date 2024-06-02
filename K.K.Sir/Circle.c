#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
	clrscr();
	int gm=DETEC,gm,i=1;
	initgraph(&gm,&gd,"c:/tc/bgi");
	while(i<=70)
		{
			if(i>=60)
				setcolor(1);
			else if(i<=50)
				setcolor(2);
			else if(i>=40)
				setcolor(3);
			else if(i<=30)
				setcolor(4);
			else if(i<=20)
				setcolor(5);
			else if(i>=10)
				setcolor(6);
			else 
				setcolor(7);
			circle(150,150,i);
			delay(50);
			i++
		}
	getch();
	return 0;
}
