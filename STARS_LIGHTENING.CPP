//STARS IN THE SKY
/*MADE BY KRISHNA AGARWAL*/
#include<conio.h>
#include<stdlib.h>
#include<graphics.h>
int main()
{
  int gd=DETECT,gm;
  int i,x,y;
  initgraph(&gd,&gm,"C:\\TC\\BGI");
  line(0,0,640,0);
  line(0,0,0,480);
  line(639,0,639,480);
  line(639,479,0,479);
  for(i=0;i<=600;i++)
  {
    x=rand()%639;
    y=rand()%480;
    putpixel(x,y,15);
  }
  getch();
  closegraph();
  return 0;
}
