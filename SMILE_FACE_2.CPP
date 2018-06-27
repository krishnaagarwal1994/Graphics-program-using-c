//SMILIE PROGRAM USING GRAPHICS
/*MADE BY KRISHNA AGARWAL*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(2);
setfillstyle(2,2);
bar3d(10,70,70,420,50,1);
bar3d(520,70,580,420,50,1);
setcolor(BLUE);
settextstyle(0,1,4);
outtextxy(110,90,"KRISHNA");
outtextxy(620,90,"AGARWAL");
setcolor(YELLOW);
circle(getmaxx()/2,getmaxy()/2,200);
setfillstyle(1,YELLOW);
floodfill(300,200,14);
setcolor(0);
setfillstyle(1,BLACK);
fillellipse(240,150,20,40);
fillellipse(400,150,20,40);
for(int i=100;i>85;i--)
ellipse(320,270,205,345,120,i);
for(int j=0;j<=1000;j++)
  {
    x=rand()%639;
    y=rand()%480;
    putpixel(x,y,random(100));
  }
getch();
closegraph();
getch();
}