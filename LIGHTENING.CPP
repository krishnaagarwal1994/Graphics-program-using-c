//LIGHTENING IN THE SKY
/*MADE BY KRISHNA AGARWAL*/
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
    clrscr();
    int gd=DETECT,gm,i,j,k,a,b,c,d;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    i=getmaxx();
    j=getmaxy();
    for(int n=0;n<10;n++)
    {
        delay(1000);
        a=random(i);
        b=random(j);
        c=random(i);
        d=random(j);
        for(k=0;k<3;k++)
        {
            line(a,b,c,d);
            lineto(a+a%50,b+b%50);
            lineto(a+100,b+100);
            delay(50);
            cleardevice();
        }
    }
    getch();
    closegraph();
    getch();
}