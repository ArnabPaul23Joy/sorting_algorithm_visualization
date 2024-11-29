#include<graphics.h>
#include<math.h>
int main()
{
    int gd=DETECT,gm;
    int i;
    initgraph(&gd,&gm,"d:\\tc\\bgi");
    setcolor(RED);
    for(i=0;i<=100;i++)
    {
        circle(330+i,225,100);
        delay(500);
        clearviewport(void);
    }
       //line(230,225,230,400);
    getch();
    closegraph();
    return 0;
}

