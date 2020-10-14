#include<graphics.h>
#include<conio.h>
int main()
{
    int gd = DETECT, gm, i, y, points[] = {288, 132, 416, 327, 160, 327, 288, 132};

    initgraph(&gd, &gm, "");
    //void fillellipse(int x, int y, int xradius, int yradius )
    ellipse(200,400,0,360,25,50);
    ellipse(100,400,0,180,25,30);
    setfillstyle(HATCH_FILL, RED);
    fillellipse(200,400,25,50);

    //void drawpoly(int num, int *polypoints)
    //drawpoly(4, points);
    setfillstyle(INTERLEAVE_FILL, BLUE);
    fillpoly(4, points);

    //void setlinestyle(int linestyle, unsigned upattern, int thickness);
    for (i = 0; i<=4 ; i++)
    {
        setlinestyle(i, 0, 1);
        line(200, y, 400, y);
        y = y + 50;
    }
    //void sector(int x, int y, int stangle, int endangle, int xradius, int yradius)
    //void pieslice(int x, int y, int stangle, int endangle, int radius)
    setfillstyle(SLASH_FILL, YELLOW);
    sector(100, 100, 0, 90, 25, 35);
    sector(200, 200, 0, 130, 25, 35);
    sector(300, 300, 0, 180, 25, 35);
    sector(400, 400, 0, 360, 25, 35);
    setfillstyle(BKSLASH_FILL, MAGENTA);
    pieslice(50,50,0,90,35);
    pieslice(150, 150, 0, 180, 35);
    /*
    setlinestyle(2, 0, );
    setlinestyle(3, 0, );
    setlinestyle(4, 1, );
    setlinestyle(0, 0, );
*/
    /*
    NORM_WIDTH (1), THICK_WIDTH (3)
    USERBIT_LINE, DASHED_LINE, SOLID_LINE, DOTTED_LINE, CENTER_LINE
    */
    getch();
    closegraph();
    return 0;
}
