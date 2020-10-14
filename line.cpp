#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT, gm;
    //void initgraph(int *graphicsDriver, int *graphicsMode, char *driverDirectoryPath)
    initgraph(&gd, &gm, "");
    //initgraph (&gd, &gm, "C:\\asd\\asd")
    //void line(int x1, int y1, int x2, int y2)
    line(100,100,200,200);
    getch();
    closegraph();
    return 0;
}
