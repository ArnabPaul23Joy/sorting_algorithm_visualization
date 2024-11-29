#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
using namespace std;

char images[10][100];

int getimages();

int viewimages(int ax,int i);


void switchimages(int ax1,int ax2,int number1,int number2);


int main()
{
    initwindow(1360,700,"selectionsort");
    int i=0;
    char p;
    int tempd,numbers[]={0,5,2,6,4,9,1,8,7,3};
    int ax[]={30,130,230,330,430,530,630,730,830,930};
    getimages();
    for (i=0;i<10;i++)
    {
        viewimages(ax[i],numbers[i]);
    }
    delay(1000);
    int j,k,l,m,n,tempi;
    for(i=0;i<9;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(numbers[j]>numbers[j+1])
            {

                switchimages(ax[j],ax[j+1],numbers[j],numbers[j+1]);


                tempd=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=tempd;
            }
        }
    }
    p=(char)getch();
    if(p=='c')

    {
        closegraph();
    }
    return 0;
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




int viewimages(int ax,int i)
{
    int v=10,g=50;
    int d=50;
    readimagefile(images[i],ax,330,ax+70,400);
}




void switchimages(int ax1,int ax2,int number1,int number2)
{

    int i,x1,x2,p,y1,y2,g=ax2-ax1,v=g/2;
    //moves up and down//
    for(i=0;i<=100;i+=1)
    {
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        bar(ax1,400-i-1,ax1+70,400);
        bar(ax2,330+i,ax2+70,330+1);
        readimagefile(images[number1],ax1,330-i,ax1+70,400-i);
        readimagefile(images[number2],ax2,330+i,ax2+70,400+i);
        delay(0);

    }
    //moves right and left//
    for(i=0;i<=g;i++)
    {
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        bar(ax1,230,ax1+i+1,300);
        bar(ax2+70-i-1,430,ax2+70,500);
        readimagefile(images[number1],ax1+i,230,ax1+70+i,300);
        readimagefile(images[number2],ax2-i,430,ax2+70-i,500);
        delay(0);
    }
    //moves up to bottom//
    for(i=0;i<=100;i+=1)
    {
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,BLACK);
        bar(ax2,230,ax2+70,230+i+1);
        bar(ax1,500-i-1,ax1+70,500);
        readimagefile(images[number1],ax2,230+i,ax2+70,300+i);
        readimagefile(images[number2],ax1,430-i,ax1+70,500-i);
        delay(0);

    }
}
