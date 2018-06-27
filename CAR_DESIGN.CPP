//CAR DESIGN
/*MADE BY KRISHNA AGARWAL*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<dos.h>
void main()
{ clrscr();
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 arc(180,350,0,360,40); 
 arc(180,350,0,360,30); 
 arc(380,350,0,360,40); 
 arc(380,350,0,360,30); 
 line(60,350,140,350);
 line(220,350,340,350);
 line(420,350,500,350);
 line(60,350,100,250);
 line(500,350,460,250);
 line(100,250,460,250);
 line(140,250,210,170);
 line(410,250,350,170);
 line(210,170,350,170);
 line(210,170,210,250);
 line(350,170,350,250);
 line(250,170,250,155);
 line(310,170,310,155);
 ellipse(280,155,0,180,30,15);
 for(int i=0;i<50;i++)
 {
        delay(100);
        if(i%2==0)
        {
            setfillstyle(SOLID_FILL,YELLOW);
            pieslice(280,155,0,360,10);
        }
        else
        {
            setfillstyle(SOLID_FILL,RED);
            pieslice(280,155,0,360,10);
        }
 }
 getch();
 closegraph();
 getch();
}