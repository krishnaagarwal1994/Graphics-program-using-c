//CIRCULAR BLACK AND WHITE ZOOMER
/*MADE BY KRISHNA AGARWAL*/
#include<iostream.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    for(int k=0;k<5;k++)
    {
        setcolor(15);
        for(int i=0;i<=200;i++)
        {
            delay(1);
            circle(325,230,i);
        }
        setcolor(0);
        for(int j=301;j>=0;j--)
        {
            delay(1);
            circle(325,230,j) ;
        }
    }
    getch();
    closegraph();
    getch();
}