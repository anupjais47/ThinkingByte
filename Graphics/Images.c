#include<stdio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm,left=100,top=100,right=200,bottom=200,x=300,y=250,radius=50;
	imitgraph(&gd,&gm,NULL);
	ce<tangle(left,top,right,bottom);
	circle(x,y,radius);
	bar(left+300,top,right+300,bottom);
	line(left-10,top+150,left+410,top+15);
	ellipse(x,y+200,0,360,100,50);
	outtextxy(left+100,top+325,"Graphics Library installed Successfully - Yogendra Singh");
	
	delay(5000);
	getchar();
	closegraph();
	return 0;
}
