//DESIGN USING LINE COMMAND IN GRAPHICS
/*MADE BY KRISHNA AGARWAL*/
#include<dos.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
    clrscr();
    int gd=DETECT,gm,x,y;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    for(int i=0;i<400;i++)
    {
        setcolor(random(15));
        line(getmaxx()/2,getmaxy()/2,random(679),random(429));
    }
    for(i=0;i<=1000;i++)
    {
        x=rand()%639;
        y=rand()%480;
        putpixel(x,y,random(100));
    }
    getch();
    closegraph();
    getch();
}