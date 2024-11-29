#include<bits/stdc++.h>
#include<graphics.h>
#include<string.h>
POINT p;
void welcome();
void menu_bars();
void menu_bars_sortalg();
void menu_bars_srcalg();
char images[11][100];
int getimages();
int viewimages();
using namespace std;
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,"d:\\tc\\bgi");
    //welcome();
    //menu_bars();
    //menu_bars_sortalg();

    menu_bars_sortalg();
    delay(3000);
    getch();
    closegraph();
    return 0;
}
void menu_bars_sortalg()
{

    rectangle(40, 160, 300, 120);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    outtextxy(100, 130, "BUBBLE SORT");


    rectangle(40, 200, 300, 240);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    outtextxy(78, 210, "INSERTION SORT");


    rectangle(40, 320, 300, 280);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    outtextxy(80, 285, "SELECTION SORT");


    rectangle(40, 400, 300, 360);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    outtextxy(100, 370, "MERGE SORT");
    POINT cursorpos;
    while(1)
    {
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            GetCursorPos(&cursorpos);
            if(cursorpos.x>=40&&cursorpos.x<=300)
            {
                printf("sof\n");
                if(cursorpos.y>=360&&cursorpos.y<=400)
                {
                    cleardevice();
                    break;
                    printf("sof1\n");




                }
                if(cursorpos.y>=280&&cursorpos.y<=320)
                {
                    cleardevice();
                    break;
                    printf("sof2\n");

                }
                if(cursorpos.y>=200&&cursorpos.y<=240)
                {
                    cleardevice();
                    break;
                    printf("sof3\n");

                }
                if(cursorpos.y>=120&&cursorpos.y<=160)
                {
                    cleardevice();
                    break;
                    printf("sof4\n");

                }
            }
        }
    }


        getimages();
        viewimages();
}



int getimages()
{
    char y;
    strcpy(images[0],"images\\000.jpg");
    strcpy(images[1],"images\\001.jpg");
    strcpy(images[2],"images\\002.jpg");
    strcpy(images[3],"images\\003.jpg");
    strcpy(images[4],"images\\004.jpg");
    strcpy(images[5],"images\\005.jpg");
    strcpy(images[6],"images\\006.jpg");
    strcpy(images[7],"images\\007.jpg");
    strcpy(images[8],"images\\008.jpg");
    strcpy(images[9],"images\\009.jpg");
}
int viewimages()
{
    int v=10,g=50;
    int d=50;
    for(int i=0; i<10; i++)
    {
        readimagefile(images[i],v,250,g,300);
        v=d+v;
        g=d+g;

    }
}
