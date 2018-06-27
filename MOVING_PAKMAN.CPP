//MOVING PAKMAN
/*MADE BY KRISHNA AGARWAL*/
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(0);
for(int i=0;i<=50;i++)
{
setcolor(random(15));
cleardevice();
if(i%2==0)
 {
  pieslice(25+12*i,26,30,330,25);
  arc(20+12*i,14,0,360,2);
  pieslice(25+12*i,96,30,330,25);
  arc(20+12*i,84,0,360,2);
  pieslice(25+12*i,166,30,330,25);
  arc(20+12*i,154,0,360,2);
  pieslice(25+12*i,236,30,330,25);
  arc(20+12*i,224,0,360,2);
  pieslice(25+12*i,306,30,330,25);
  arc(20+12*i,294,0,360,2);
  pieslice(25+12*i,376,30,330,25);
  arc(20+12*i,364,0,360,2);
  pieslice(25+12*i,446,30,330,25);
  arc(20+12*i,434,0,360,2);
 }
else
 {
  pieslice(25+12*i,26,0,360,25);
  arc(20+12*i,14,0,360,2);
  pieslice(25+12*i,96,0,360,25);
  arc(20+12*i,84,0,360,2);
  pieslice(25+12*i,166,0,360,25);
  arc(20+12*i,154,0,360,2);
  pieslice(25+12*i,236,0,360,25);
  arc(20+12*i,224,0,360,2);
  pieslice(25+12*i,306,0,360,25);
  arc(20+12*i,294,0,360,2);
  pieslice(25+12*i,376,0,360,25);
  arc(20+12*i,364,0,360,2);
  pieslice(25+12*i,446,0,360,25);
  arc(20+12*i,434,0,360,2);
 }
delay(200);
}
getch();
closegraph();
getch();
}