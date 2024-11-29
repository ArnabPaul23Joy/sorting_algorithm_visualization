#include<graphics.h>
#include<math.h>
#define pi 3.14159265
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"d:\\tc\\bgi");
    setcolor(RED);
    circle(330,225,50);
    delay(2000);
    float a,b,c,d;
    setfillstyle(SOLID_FILL,RED);
    delay(2000);
    floodfill(330,225,RED);
    delay(2000);
    line(100,125,100,325);

    delay(2000);
    line(100,125,560,125);
    delay(2000);
    line(560,325,560,125);
    delay(2000);
    line(100,325,560,325);
    delay(2000);
    line(100,225,330,125);
    delay(2000);
    line(100,225,330,325);
    delay(2000);
    line(560,225,330,325);
    delay(2000);
    line(560,225,330,125);
    delay(2000);
    getch();
    closegraph();
    return 0;
}
