#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
    int gdriver = DETECT, gmode,x, y;
    initgraph(&gdriver,&gmode,"");
    x = getmaxx()/2;
    y = getmaxy()/2;

    setcolor(RED);
    arc(x,y,0,180,10);

    getch();
    closegraph()
}
