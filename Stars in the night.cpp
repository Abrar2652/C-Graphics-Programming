#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
int main()
{
    int gd = DETECT, gm;
    int i, x, y;
    initgraph(&gd, &gm, "");
    while(!kbhit())
    {
            for (i=1; i<=500; i++)
            {
                x = rand()%getmaxx();
                y = rand()%getmaxy();
                putpixel(x, y, 15);
            }
            delay(500);
            cleardevice();
    }


    getch();
    closegraph();
    return 0;
}

