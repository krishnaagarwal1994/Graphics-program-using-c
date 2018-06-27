//ANIMATED CIRCLES
/*MADE BY KRISHNA AGARWAL*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
    clrscr();
    int gd=DETECT,gm,i;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    while(!kbhit())  //press any key to terminate the program
    {
        for(i=0;i<=230;i++)
        {
            delay(10);
            setcolor(random(15));
            circle(315,235,i);
        }
    }
    getch();
    closegraph();
    getch();
}