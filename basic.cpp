#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gdriver = DETECT, gmode,i, x, y;
    initgraph(&gdriver,&gmode,"");
    x = getmaxx()/2;
    y = getmaxy()/2;

    for (i=0; i<200; i++)
    {
        setcolor(RED);
        arc(x=i,y,0,180,10+i);
    }
    delay(50);
    getch();
    closegraph();
    return 0;
}
