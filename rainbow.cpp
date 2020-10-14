#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<string.h>
int main()
{
    int gd = DETECT, gm;
    int i, x, y;

    initgraph(&gd, &gm, "");
    setcolor(RED);
    settextjustify(CENTER_TEXT,CENTER_TEXT);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    outtextxy(getmaxx()/2, (getmaxy()/2 + 30), "HEY RAINBOW ISHRAK!!!");
    for(i = 30; i<100;i++)
    {
        delay(700);
        setcolor(i/10);
        arc(getmaxx()/2, getmaxy()/2, 0, 180, i-10);
    }


    getch();
    closegraph();
    return 0;
}



