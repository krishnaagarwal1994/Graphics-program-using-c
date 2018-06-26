#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#define maxx 631
#define maxy 474
#define miny 41
#define speed 2
#define speed_argument 3

void load_graphics();
void load_startpage();
void load_instruction_page();
void load_gamelayout();
int get_random_value_for_x();
int get_random_value_for_y();
int get_random_char_position();
int number_of_chars();
void erase_char(int index);
int check_display();//will return 1 if display is clear otherwise return 0
void update_score(int,int,int);
void clean_score();
void last_frame(int);
int *get_old_results();
void write_new_score(int *);
void show_score();


int rdmx[632]= {0};
int rdmy[472]= {0};
int index[200]= {0};
int flag[200]= {0};
int Xposition[200]= {0};
int miss=0,hit=0,counter=0;
void main()
{
    load_graphics();
    load_startpage();
    load_instruction_page();
    closegraph();
    load_graphics();
    load_gamelayout();
    int mx,my,i,no_of_chars,var1,var2,var3,var;
    char ch;
    int initiate_xposition_to_zero=0;
XYZ:
    for(initiate_xposition_to_zero=0; initiate_xposition_to_zero<200; initiate_xposition_to_zero++)
    {
        Xposition[initiate_xposition_to_zero]=0;
    }
    no_of_chars=number_of_chars(); //here i decide the initial numbr of chars to rain
    for(i=0; i<no_of_chars; i++)
    {
        var=get_random_char_position();
        flag[var]=1; //in this loop i am updating flags of the selected chars
        Xposition[var]=get_random_value_for_x();
        index[var]=miny;
    }
    /*____________________CODE_FOR_ALL_SMALL_CASE_LETTERS______________________*/
    while(1)
    {
        if(flag['a'])
        {
            setcolor(10);
            outtextxy(Xposition['a'],index['a']+=(speed+rand()%speed_argument),"a");
            if(index['a']>=maxy)
            {
                index['a']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['b'])
        {
            setcolor(10);
            outtextxy(Xposition['b'],index['b']+=(speed+rand()%speed_argument),"b");
            if(index['b']>=maxy)
            {
                index['b']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['c'])
        {
            setcolor(10);
            outtextxy(Xposition['c'],index['c']+=(speed+rand()%speed_argument),"c");
            if(index['c']>=maxy)
            {
                index['c']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['d'])
        {
            setcolor(10);
            outtextxy(Xposition['d'],index['d']+=(speed+rand()%speed_argument),"d");
            if(index['d']>=maxy)
            {
                index['d']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['e'])
        {
            setcolor(10);
            outtextxy(Xposition['e'],index['e']+=(speed+rand()%speed_argument),"e");
            if(index['e']>=maxy)
            {
                index['e']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['f'])
        {
            setcolor(10);
            outtextxy(Xposition['f'],index['f']+=(speed+rand()%speed_argument),"f");
            if(index['f']>=maxy)
            {
                index['f']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['g'])
        {
            setcolor(10);
            outtextxy(Xposition['g'],index['g']+=(speed+rand()%speed_argument),"g");
            if(index['g']>=maxy)
            {
                index['g']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['h'])
        {
            setcolor(10);
            outtextxy(Xposition['h'],index['h']+=(speed+rand()%speed_argument),"h");
            if(index['h']>=maxy)
            {
                index['h']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['i'])
        {
            setcolor(10);
            outtextxy(Xposition['i'],index['i']+=(speed+rand()%speed_argument),"i");
            if(index['i']>=maxy)
            {
                index['i']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['j'])
        {
            setcolor(10);
            outtextxy(Xposition['j'],index['j']+=(speed+rand()%speed_argument),"j");
            if(index['j']>=maxy)
            {
                index['j']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['k'])
        {
            setcolor(10);
            outtextxy(Xposition['k'],index['k']+=(speed+rand()%speed_argument),"k");
            if(index['k']>=maxy)
            {
                index['k']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['l'])
        {
            setcolor(10);
            outtextxy(Xposition['l'],index['l']+=(speed+rand()%speed_argument),"l");
            if(index['l']>=maxy)
            {
                index['l']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['m'])
        {
            setcolor(10);
            outtextxy(Xposition['m'],index['m']+=(speed+rand()%speed_argument),"m");
            if(index['m']>=maxy)
            {
                index['m']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['n'])
        {
            setcolor(10);
            outtextxy(Xposition['n'],index['n']+=(speed+rand()%speed_argument),"n");
            if(index['n']>=maxy)
            {
                index['n']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['o'])
        {
            setcolor(10);
            outtextxy(Xposition['o'],index['o']+=(speed+rand()%speed_argument),"o");
            if(index['o']>=maxy)
            {
                index['o']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['p'])
        {
            setcolor(10);
            outtextxy(Xposition['p'],index['p']+=(speed+rand()%speed_argument),"p");
            if(index['p']>=maxy)
            {
                index['p']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['q'])
        {
            setcolor(10);
            outtextxy(Xposition['q'],index['q']+=(speed+rand()%speed_argument),"q");
            if(index['q']>=maxy)
            {
                index['q']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['r'])
        {
            setcolor(10);
            outtextxy(Xposition['r'],index['r']+=(speed+rand()%speed_argument),"r");
            if(index['r']>=maxy)
            {
                index['r']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['s'])
        {
            setcolor(10);
            outtextxy(Xposition['s'],index['s']+=(speed+rand()%speed_argument),"s");
            if(index['s']>=maxy)
            {
                index['s']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['t'])
        {
            setcolor(10);
            outtextxy(Xposition['t'],index['t']+=(speed+rand()%speed_argument),"t");
            if(index['t']>=maxy)
            {
                index['t']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['u'])
        {
            setcolor(10);
            outtextxy(Xposition['u'],index['u']+=(speed+rand()%speed_argument),"u");
            if(index['u']>=maxy)
            {
                index['u']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['v'])
        {
            setcolor(10);
            outtextxy(Xposition['v'],index['v']+=(speed+rand()%speed_argument),"v");
            if(index['v']>=maxy)
            {
                index['v']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['w'])
        {
            setcolor(10);
            outtextxy(Xposition['w'],index['w']+=(speed+rand()%speed_argument),"w");
            if(index['w']>=maxy)
            {
                index['w']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['x'])
        {
            setcolor(10);
            outtextxy(Xposition['x'],index['x']+=(speed+rand()%speed_argument),"x");
            if(index['x']>=maxy)
            {
                index['x']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['y'])
        {
            setcolor(10);
            outtextxy(Xposition['y'],index['y']+=(speed+rand()%speed_argument),"y");
            if(index['y']>=maxy)
            {
                index['y']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }
        if(flag['z'])
        {
            setcolor(10);
            outtextxy(Xposition['z'],index['z']+=(speed+rand()%speed_argument),"z");
            if(index['z']>=maxy)
            {
                index['z']=miny;
                miss++;
                update_score(hit,miss,counter);
            }
        }

        if(kbhit())
        {
            ch=getch();
            counter++;
            switch(ch)
            {
            case 'a':
                if(flag['a']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['a']=0;
                setcolor(0);
                outtextxy(Xposition['a'],index['a'],"a");
                break;
            case 'b':
                if(flag['b']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['b']=0;
                setcolor(0);
                outtextxy(Xposition['b'],index['b'],"b");
                break;
            case 'c':
                if(flag['c']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['c']=0;
                setcolor(0);
                outtextxy(Xposition['c'],index['c'],"c");
                break;
            case 'd':
                if(flag['d']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['d']=0;
                setcolor(0);
                outtextxy(Xposition['d'],index['d'],"d");
                break;
            case 'e':
                if(flag['e']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['e']=0;
                setcolor(0);
                outtextxy(Xposition['e'],index['e'],"e");
                break;
            case 'f':
                if(flag['f']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['f']=0;
                setcolor(0);
                outtextxy(Xposition['f'],index['f'],"f");
                break;
            case 'g':
                if(flag['g']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['g']=0;
                setcolor(0);
                outtextxy(Xposition['g'],index['g'],"g");
                break;
            case 'h':
                if(flag['h']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['h']=0;
                setcolor(0);
                outtextxy(Xposition['h'],index['h'],"h");
                break;
            case 'i':
                if(flag['i']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['i']=0;
                setcolor(0);
                outtextxy(Xposition['i'],index['i'],"i");
                break;
            case 'j':
                if(flag['j']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['j']=0;
                setcolor(0);
                outtextxy(Xposition['j'],index['j'],"j");
                break;
            case 'k':
                if(flag['k']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['k']=0;
                setcolor(0);
                outtextxy(Xposition['k'],index['k'],"k");
                break;
            case 'l':
                if(flag['l']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['l']=0;
                setcolor(0);
                outtextxy(Xposition['l'],index['l'],"l");
                break;
            case 'm':
                if(flag['m']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['m']=0;
                setcolor(0);
                outtextxy(Xposition['m'],index['m'],"m");
                break;
            case 'n':
                if(flag['n']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['n']=0;
                setcolor(0);
                outtextxy(Xposition['n'],index['n'],"n");
                break;
            case 'o':
                if(flag['o']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['o']=0;
                setcolor(0);
                outtextxy(Xposition['o'],index['o'],"o");
                break;
            case 'p':
                if(flag['p']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['p']=0;
                setcolor(0);
                outtextxy(Xposition['p'],index['p'],"p");
                break;
            case 'q':
                if(flag['q']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['q']=0;
                setcolor(0);
                outtextxy(Xposition['q'],index['q'],"q");
                break;
            case 'r':
                if(flag['r']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['r']=0;
                setcolor(0);
                outtextxy(Xposition['r'],index['r'],"r");
                break;
            case 's':
                if(flag['s']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['s']=0;
                setcolor(0);
                outtextxy(Xposition['s'],index['s'],"s");
                break;
            case 't':
                if(flag['t']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['t']=0;
                setcolor(0);
                outtextxy(Xposition['t'],index['t'],"t");
                break;
            case 'u':
                if(flag['u']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['u']=0;
                setcolor(0);
                outtextxy(Xposition['u'],index['u'],"u");
                break;
            case 'v':
                if(flag['v']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['v']=0;
                setcolor(0);
                outtextxy(Xposition['v'],index['v'],"v");
                break;
            case 'w':
                if(flag['w']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['w']=0;
                setcolor(0);
                outtextxy(Xposition['w'],index['w'],"w");
                break;
            case 'x':
                if(flag['x']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['x']=0;
                setcolor(0);
                outtextxy(Xposition['x'],index['x'],"x");
                break;
            case 'y':
                if(flag['y']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['y']=0;
                setcolor(0);
                outtextxy(Xposition['y'],index['y'],"y");
                break;
            case 'z':
                if(flag['z']==1)
                {
                    hit++;
                }
                else
                {
                    miss++;
                }
                update_score(hit,miss,counter);
                flag['z']=0;
                setcolor(0);
                outtextxy(Xposition['z'],index['z'],"z");
                break;
            case 27:
                last_frame(hit);
                //exit(0);
            default:
                break;
            }
        }
        delay(60);
        //here we erase all the characters on the screen to move them down.
        setcolor(0);
        for(var1=97; var1<=122; var1++)
        {
            if(flag[var1]==1)
            {
                char arr[1]= {var1};
                outtextxy(Xposition[var1],index[var1],arr);
            }
        }
        if(check_display())
        {
            goto XYZ;
        }
    }
    getch();
    closegraph();
    getch();
}
void load_graphics()
{
    int gdriver=DETECT,gmode;
    clrscr();
    initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
}
void load_gamelayout()
{
    // layout of a screen _blue box covering a height of whole window
    cleardevice();
    setcolor(1);
    rectangle(0,0,getmaxx(),getmaxy());
    // making upper bar of _blue color
    line(0,40,635,40);
    // Displaying the name of GAME
    setcolor(5);
    outtextxy(285,10,"DESTROY");
    outtextxy(300,20,"THE");
    outtextxy(275,30,"CHARACTERS");
    // making the top center box of the _red color covering a height of 60 units
    setcolor(RED);
    rectangle(220,0,405,40);
    //Displaying the score
    setcolor(5);
    outtextxy(460,20,"TOTAL KEYS:");
    outtextxy(40,10,"MISS:");
    outtextxy(40,25,"HITS:");
}
int get_random_value_for_x()
{
    int a;
    a=rand()%maxx+2;
    while(rdmx[a]!=0)
    {
        a=rand()%maxx+1;
    }
    return a;
}
int get_random_value_for_y()
{
    int a;
    a=rand()%maxy;
    while(rdmy[a]!=0)
    {
        a=rand()%maxy;
    }
    return a;
}
int get_random_char_position()
{
    //this will return a random value between 97 and 122
    int a;
    a=random(25)+97;
    return a;
}
int number_of_chars()
{
    int a;
    a=random(9)+1;
    return a;
}
void erase_char(int index)
{

}
int check_display()
{
    int i;
    for(i=97; i<=122; i++)
    {
        if(flag[i]==1)
        {
            return 0;
        }
    }
    return 1;
}
void load_startpage()
{
    cleardevice();
    int mx,my;
    mx=getmaxx();
    my=getmaxy();
    setcolor(4);
    settextstyle(0,0,3);
    outtextxy(150,400,"PRESS ANY KEY");
    setcolor(5);
    settextstyle(10,0,7);
    outtextxy(20,30,"CHARACTER");
    outtextxy(70,160,"SHOOTING");
    while(!(kbhit()))
    {
        putpixel(rand()%mx,rand()%my,rand()%16);
        delay(5);
    }
    getch();
}
void load_instruction_page()
{
    cleardevice();
    setcolor(4);
    settextstyle(10,0,4);
    outtextxy(150,10,"INSTRUCTIONS");
    setcolor(3);
    settextstyle(0,0,2);
    outtextxy(60,110,"1: press the keys to shoot the");
    outtextxy(60,150,"    character.");
    outtextxy(60,190,"2: press anytime Esc to exit");
    outtextxy(60,230,"   the game.");
    setcolor(YELLOW);
    settextstyle(10,0,3);
    outtextxy(150,400,"PRESS ANY KEY");
    getch();
}
void update_score(int ht,int ms,int count)
{
    char buffer_ht[33];
    char buffer_ms[33];
    char buffer_count[33];
    count=ht+ms;
    itoa (ht,buffer_ht,10);
    itoa (ms,buffer_ms,10);
    itoa (count,buffer_count,10);
    clean_score();
    setcolor(GREEN);
    outtextxy(550,20,buffer_count);
    outtextxy(100,10,buffer_ms);
    outtextxy(100,25,buffer_ht);
    if(ms==10)
    {
        last_frame(ht);
    }
}
void clean_score()
{
    setcolor(0);
    outtextxy(550,20,"00000");
    outtextxy(550,20,"11111");
    outtextxy(550,20,"22222");
    outtextxy(550,20,"33333");
    outtextxy(550,20,"44444");
    outtextxy(550,20,"55555");
    outtextxy(550,20,"66666");
    outtextxy(550,20,"77777");
    outtextxy(550,20,"88888");
    outtextxy(550,20,"99999");

    outtextxy(100,10,"00000");
    outtextxy(100,10,"11111");
    outtextxy(100,10,"22222");
    outtextxy(100,10,"33333");
    outtextxy(100,10,"44444");
    outtextxy(100,10,"55555");
    outtextxy(100,10,"66666");
    outtextxy(100,10,"77777");
    outtextxy(100,10,"88888");
    outtextxy(100,10,"99999");

    outtextxy(100,25,"00000");
    outtextxy(100,25,"11111");
    outtextxy(100,25,"22222");
    outtextxy(100,25,"33333");
    outtextxy(100,25,"44444");
    outtextxy(100,25,"55555");
    outtextxy(100,25,"66666");
    outtextxy(100,25,"77777");
    outtextxy(100,25,"88888");
    outtextxy(100,25,"99999");
}
void last_frame(int ht)
{
    int *a,i,j,temp,ht1;
    int a1[3]; //contain old results
    int num=3;
    ht1=ht;
    a=get_old_results();
    a1[0]=*(a);
    a1[1]=*(a+1);
    a1[2]=*(a+2);
    //bubble sort
    for (i=1; i<num; i++)
    {
        for(j=0; j<num-1; j++)
        {
            if(a1[j]>a1[j+1])
            {
                temp=a1[j];
                a1[j]=a1[j + 1];
                a1[j + 1]=temp;
            }
        }
    }
    if(ht>a1[2])
    {
        temp=a1[2];
        a1[2]=ht;
        ht=temp;
        write_new_score(a1);
    }
    else
    {
        if(ht>a1[1])
        {
            temp=a1[1];
            a1[1]=ht;
            ht=temp;
            write_new_score(a1);
        }
        else
        {
            if(ht>a1[0])
            {
                temp=a1[0];
                a1[0]=ht;
                ht=temp;
                write_new_score(a1);
            }
            else
            {

            }
        }
    }

    //printing score here
    closegraph();
    load_graphics();
    char buffer_ht[33];
    char buffer_1[33];
    char buffer_2[33];
    char buffer_3[33];
    itoa (ht1,buffer_ht,10);
    itoa (a1[2],buffer_1,10);
    itoa (a1[1],buffer_2,10);
    itoa (a1[0],buffer_3,10);
    setcolor(3);
    settextstyle(10,0,2);
    outtextxy(420,50,"Your score:");
    setcolor(3);
    outtextxy(500,120,buffer_ht);
    outtextxy(20,50,"TOP THREE SCORES");
    outtextxy(130,120,buffer_1);
    outtextxy(130,190,buffer_2);
    outtextxy(130,260,buffer_3);

    getch();
    closegraph();
    exit(0);
}
int *get_old_results()
{
    int s;
    int counter=0;
    static int a[3];
    FILE *file;
    file=fopen("gamescore.txt","r");
    while((s=getw(file))!=EOF)
    {
        a[counter++]=s;
    }
    fclose(file);
    return a;
}
void write_new_score(int arr2[])
{
    int i;
    FILE *file;
    file=fopen("gamescore.txt","w");
    for(i=0; i<3; i++)
    {
        putw(arr2[i],file);
    }
    fclose(file);
}
