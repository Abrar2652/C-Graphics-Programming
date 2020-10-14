
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
    //void lineto(int x, int y)
    //void moveto(int x, int y) moves origin
    //void cleardevice(int x, int y)
    //void bar(int left, int top, int right, int bottom)
    //void bar3d(int left, int top, int right, int bottom, int depth, int topflag)
    setfillstyle(HATCH_FILL, RED);
    bar3d(100,100,200,400,50,1);




    /*
    EMPTY_FILL, SOLID_FILL, LINE_FILL, LTSLASH_FILL, SLASH_FILL, BKSLASH_FILL, LTBKLASH_FILL, HATCH_FILL, XHATCH_FILL
    INTERLEAVE_FILL, WIDE_DOT_FILL, CLOSE_DOT_FILL, USER_FILL
    */

    getch();
    closegraph();
    return 0;
}

