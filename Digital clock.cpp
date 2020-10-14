#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
#include<string.h>
int main()
{
    int gd = DETECT, gm;
    int i, x, y;
    long currentTime;
    char timeStr[256];

    initgraph(&gd, &gm, "");
    while(!kbhit())
    {
        cleardevice();
        currentTime = time(NULL);
        strcpy(timeStr, ctime(&currentTime));
        setcolor(GREEN);
        settextjustify(CENTER_TEXT,CENTER_TEXT);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3 );
        outtextxy(getmaxx()/2, getmaxy()/2, timeStr);
        delay(1000);
    }


    getch();
    closegraph();
    return 0;
}


