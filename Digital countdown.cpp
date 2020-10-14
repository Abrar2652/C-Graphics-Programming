#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<time.h>
int main()
{
    int gd = DETECT, gm, i;
    char ch[5];
    initgraph(&gd, &gm, "");
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
    setcolor(GREEN);
    outtextxy(105 +10, 105+10, "ABRAR'S PERSONAL COUNTDOWN");
    delay(1050);
    outtextxy(getmaxx()/2, getmaxy()/2, "READY!!!");
    delay(1050);
    cleardevice();
    outtextxy(getmaxx()/2, getmaxy()/2, "SET!!");
    delay(1050);
    cleardevice();
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 5);
    setcolor(GREEN);

    for (i = 10; i>=0; i--)
    {
        sprintf(ch, "%d", i);
        outtextxy(getmaxx()/2, getmaxy()/2, ch);
        delay(1000);
        cleardevice();
    }

    getch();
    closegraph();
    return 0;
}
