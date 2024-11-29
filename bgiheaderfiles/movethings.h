#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
#include<string.h>
#include"scancircle.h"

void draw_circle(int x,int y,int r)
{
    setcolor(RED);
    circle(x,y,r);
    setfillstyle(SOLID_FILL,RED);
    floodfill(x,y-35,RED);

}

void clearcircle(int x,int y,int r)
{
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,BLACK);
    bar(x-r-1,y-r-1,x+r+1,y+r+1);

}


int movecirup(int n,int ax,int y,int num,char arr[],int c);

int movecirdow(int n,int ax,int y,int num,char arr[],int c);

int movecirright(int n,int ax1,int ax2,int y,int num,char arr[]);

int movecirleft(int n,int ax1,int ax2,int y,int num,char arr[]);

int switchcircles(int n,int ax1,int ax2,char arr1[],char arr2[]);

int insertcircles(int n,int num1,int num2,int ax1,int ax2,char arr[]);




int movecirup(int n,int ax,int y,int num,char arr[],int c)
{
    int i,j,k=0,l,m;
    if(c==1)
    {
        k=81;
    }
    for(i=k;i<100;i++)
    {
        clearcircle(ax,y-i,40);
        draw_circle(ax,y-i,40);
        setcolor(BLUE);
        outtextxy(ax-37,y-i-3,arr);
        delay(7);
    }
    return y-100;
}



int movecirdow(int n,int ax,int y,int num,char arr[],int c)
{
    int i,j,k=0,l,m;
    if(c==1)
    {
        k=81;
    }
    for(i=k;i<100;i++)
    {
        clearcircle(ax,y+i,40);
        draw_circle(ax,y+i,40);
        setcolor(BLUE);
        outtextxy(ax-37,y+i-3,arr);
        delay(7);
    }
    return y+100;
}



int movecirright(int n,int ax1,int ax2,int y,int num,char arr[])
{
    int i,j,k=0,l,m;

    for(i=k;i<=ax2-ax1;i++)
    {
        clearcircle(ax1+i,y,40);
        draw_circle(ax1+i,y,40);
        setcolor(BLUE);
        outtextxy(ax1+i-37,y-3,arr);
        delay(7);
    }
    return ax2;
}


int movecirleft(int n,int ax1,int ax2,int y,int num,char arr[])
{
    int i,j,k=0,l,m;

    for(i=k;i<=ax1-ax2;i++)
    {
        clearcircle(ax1-i,y,40);
        draw_circle(ax1-i,y,40);
        setcolor(BLUE);
        outtextxy(ax1-i-37,y-3,arr);
        delay(7);
    }
    return ax1;
}


int insertcircles(int n,int num1,int num2,int ax1,int ax2,char arr[])
{
    movecirup(n,ax1,330,num1,arr,1);
    movecirright(n,ax1,ax2,230,num1,arr);
    movecirdow(n,ax2,230,num1,arr,0);
}



int switchcircles(int n,int ax1,int ax2,char arr1[],char arr2[])
{
    int i,j,k,l,m;
    for(i=0;i<=100;i++)
    {
        clearcircle(ax1,330-i,40);
        clearcircle(ax2,330+i,40);
        draw_circle(ax1,330-i,40);
        outtextxy(ax1-37,330-i-3,arr1);
        draw_circle(ax2,330+i,40);
        outtextxy(ax2-37,330+i-3,arr2);
        delay(7);
    }
    for(i=0;i<=ax2-ax1;i++)
    {
        clearcircle(ax1+i,230,40);
        clearcircle(ax2-i,430,40);
        draw_circle(ax1+i,230,40);
        outtextxy(ax1+i-37,230-3,arr1);
        draw_circle(ax2-i,430,40);
        outtextxy(ax2-i-37,430-3,arr2);
        delay(7);
    }
    for(i=0;i<=100;i++)
    {
        clearcircle(ax2,230+i,40);
        clearcircle(ax1,430-i,40);
        draw_circle(ax2,230+i,40);
        outtextxy(ax2-37,230+i-3,arr1);
        draw_circle(ax1,430-i,40);
        outtextxy(ax1-37,430-i-3,arr2);
        delay(7);
    }

}
