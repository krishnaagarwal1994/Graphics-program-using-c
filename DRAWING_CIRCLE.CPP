//DRAWING A CIRCLE WITH THE HELP OF AN ARC
/*MADE BY KRISHNA AGARWAL*/
#include<dos.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
    clrscr();
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    for(int i=1;i<=360;i++)
    {
        setcolor(random(15));
        delay(50);
        arc(getmaxx()/2,getmaxy()/2,0,i,150);
    }
    getch();
    closegraph();
    getch();
}