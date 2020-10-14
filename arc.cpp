#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    //void initgraph(int *graphicsDriver, int *graphicsMode, char *driverDirectoryPath)
    initgraph(&gd, &gm, "");
    //initgraph (&gd, &gm, "C:\\asd\\asd")
    //void arc(int x, int y, int stangle,int endangle, int radius)
    arc(50,50,0,30,50);
    //void setcolor(int color)
    //void floodfill(int x, int y, int border)
    //void setfillstyle(int pattern, int color)
    //void outtext(char *string)
    //void outtextxy(int x, int y, char* string)
    setcolor(GREEN);
    outtext("MD. ABRAR JAHIN");
    setcolor(BLUE);
    outtextxy(150,150,"md. abrar jahin");
    arc(50,50,0, 360,50);
    setcolor(4);
    circle(50,50,10);
    setfillstyle(SLASH_FILL, 4);
    floodfill(50, 50, 4);
    setcolor(13);
    circle(100,100,50);
    setfillstyle(INTERLEAVE_FILL, 13);
    floodfill(104, 105, 13);
    /*
    EMPTY_FILL, SOLID_FILL, LINE_FILL, LTSLASH_FILL, SLASH_FILL, BKSLASH_FILL, LTBKLASH_FILL, HATCH_FILL, XHATCH_FILL
    INTERLEAVE_FILL, WIDE_DOT_FILL, CLOSE_DOT_FILL, USER_FILL
    */

    getch();
    closegraph();
    return 0;
}
