#include<bits/stdc++.h>
#include<graphics.h>
#include<string>
#include<math.h>
using namespace std;



int menu_bars_sortalg()
{
    readimagefile("bg.jpg",0,0,1360,700);
    rectangle(40, 160, 300, 120);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    setcolor(BLUE);
    outtextxy(100, 130, "BUBBLE SORT");


    rectangle(40, 200, 300, 240);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    setcolor(RED);
    outtextxy(78, 210, "INSERTION SORT");


    rectangle(40, 320, 300, 280);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    setcolor(YELLOW);
    outtextxy(80, 285, "SELECTION SORT");


    rectangle(40, 400, 300, 360);
    settextstyle(BOLD_FONT, HORIZ_DIR, 3);
    setcolor(CYAN);
    outtextxy(100, 370, "COUNTING SORT");
    POINT cursorpos;
    int op;
    while(1)
    {
        if(GetAsyncKeyState(VK_LBUTTON))
        {
            GetCursorPos(&cursorpos);
            if(cursorpos.x>=40&&cursorpos.x<=300)
            {

                if(cursorpos.y-30>=360&&cursorpos.y-30<=400)
                {
                    cleardevice();
                    op=14;
                    printf("Csof1\n");
                    break;




                }
                if(cursorpos.y-30>=280&&cursorpos.y-30<=320)
                {
                    cleardevice();
                    op=13;
                    printf("Ssof2\n");
                    break;

                }
                if(cursorpos.y-30>=200&&cursorpos.y-30<=240)
                {
                    cleardevice();
                    op=12;
                    printf("Isof3\n");
                    break;

                }
                if(cursorpos.y-30>=120&&cursorpos.y-30<=160)
                {
                    cleardevice();
                    op=11;
                    printf("Bsof4\n");
                    break;

                }
            }
        }
    }

        return op;

}

