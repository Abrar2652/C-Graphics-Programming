
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    //void initgraph(int *graphicsDriver, int *graphicsMode, char *driverDirectoryPath)
    initgraph(&gd, &gm, "");
    //initgraph (&gd, &gm, "C:\\asd\\asd")
    //void rectangle(int left, int top, int right,int bottom)
    setcolor(RED);
    rectangle(100,100,200,200);
    setfillstyle(XHATCH_FILL, RED);
    floodfill(110,105,RED);
    //void lineto(int x, int y)
    //void moveto(int x, int y) moves origin
    //void cleardevice(int x, int y)
    setcolor(GREEN);
    moveto(100, 100);
    lineto(5,200);
    outtextxy(0,20,"Press any key to clear the screen");
    getch();
    cleardevice();
    outtextxy(0,20,"Press any key to exit");

    /*
    EMPTY_FILL, SOLID_FILL, LINE_FILL, LTSLASH_FILL, SLASH_FILL, BKSLASH_FILL, LTBKLASH_FILL, HATCH_FILL, XHATCH_FILL
    INTERLEAVE_FILL, WIDE_DOT_FILL, CLOSE_DOT_FILL, USER_FILL
    */

    getch();
    closegraph();
    return 0;
}
