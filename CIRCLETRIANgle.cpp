#include<graphics.h>
#include<math.h>
#define pi 3.14159265
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"d:\\tc\\bgi");
    setcolor(YELLOW);
    circle(330,225,100);
    circle(330,225,1);
    float a,b,c,d;
    a=330-100*cos(pi/6);
    b=225+100*sin(pi/6);
    line(a,b,330,125);
    c=330+100*cos(pi/6);
    d=225+100*sin(pi/6);
    line(330,125,c,d);
    line(a,b,c,d);
    getch();
    closegraph();
    return 0;
}
