//PROGRAM OF COLOR RAIN IN GRAPHICS
/*MADE BY KRISHNA AGARWAL*/
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
int main()
{
  int gd=DETECT,gm;
  int i,x,y;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  while(!kbhit())
  {
  delay(200);
  cleardevice();
  for(i=0;i<2000;i++)
  {
    x=rand()%639;
    y=rand()%480;
    putpixel(x,y,random(100));
  }
  }
  getch();
  closegraph();
  return 0;
}