#include"movethings.h"


int bubblesort();

int selectionsort();

int insertsort();

int countingsort();



int bubblesort()
{
    int c,n,i,j,k,l,m,arr[10000],ax[10000];
    char str[20][10000];
    char temp1[10000];
    int temp2;
    cleardevice();
    settextstyle(BOLD_FONT,HORIZ_DIR,3);
    setcolor(BLUE);
    outtextxy(20,100,"ENTER THE NUMBER OF ELEMENTS : ");


    n=getcirnum(600,100);

    settextstyle(BOLD_FONT,HORIZ_DIR,1);
    setcolor(BLUE);
    cleardevice();
    settextstyle(BOLD_FONT,HORIZ_DIR,3);
    outtextxy(100,100,"ENTER THE NUMBERS : ");


    getaxisnum(n,ax);
    for(i=0;i<n;i++)
    {
        draw_circle(ax[i],330,40);
    }

    char strr[10000];
    for(i=0;i<n;i++)
    {
        getnumbers(i,ax,arr,strr);
        strcpy(str[i],strr);

    }
    setfillstyle(SOLID_FILL,BLACK);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                switchcircles(n,ax[j],ax[j+1],str[j],str[j+1]);
                temp2=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp2;
                strcpy(temp1,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp1);
                delay(5);
            }
        }
    }

    char ch=(char)getch();


}



int selectionsort()
{
    int c,n,i,j,k,l,m,arr[10000],ax[10000];
    char str[20][10000];
    char temp1[10000];
    int temp2;
    cleardevice();
    settextstyle(BOLD_FONT,HORIZ_DIR,3);
    setcolor(BLUE);
    outtextxy(20,100,"ENTER THE NUMBER OF ELEMENTS : ");


    n=getcirnum(600,100);

    settextstyle(BOLD_FONT,HORIZ_DIR,1);
    setcolor(BLUE);
    cleardevice();
    settextstyle(BOLD_FONT,HORIZ_DIR,3);
    outtextxy(100,100,"ENTER THE NUMBERS : ");


    getaxisnum(n,ax);
    for(i=0;i<n;i++)
    {
        draw_circle(ax[i],330,40);
    }

    char strr[10000];
    for(i=0;i<n;i++)
    {
        getnumbers(i,ax,arr,strr);
        strcpy(str[i],strr);

    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                switchcircles(n,ax[i],ax[j],str[i],str[j]);
                temp2=arr[i];
                arr[i]=arr[j];
                arr[j]=temp2;
                strcpy(temp1,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp1);
                delay(5);
            }
        }
    }

    char ch=(char)getch();


}



int insertsort()
{
    int c,n,i,j,k,l,m,arr[10000],ax[10000];
    char str[20][10000];
    char temp[10000];
    int x;
    cleardevice();
    settextstyle(BOLD_FONT,HORIZ_DIR,3);
    setcolor(BLUE);
    outtextxy(20,100,"ENTER THE NUMBER OF ELEMENTS : ");


    n=getcirnum(600,100);

    settextstyle(BOLD_FONT,HORIZ_DIR,1);
    setcolor(BLUE);
    cleardevice();
    settextstyle(BOLD_FONT,HORIZ_DIR,3);
    outtextxy(100,100,"ENTER THE NUMBERS (POSITIVE) : ");
    getaxisnum(n,ax);
    for(i=0;i<n;i++)
    {
        draw_circle(ax[i],330,40);
    }

    char strr[10000];
    for(i=0;i<n;i++)
    {
        getnumbers(i,ax,arr,strr);
        strcpy(str[i],strr);
    }

    for(i=0;i<n;i++)
    {
        x=arr[i];
        movecirdow(n,ax[i],330,arr[i],str[i],1);
        j=i-1;
        while(j>=0&&arr[j]>x)
        {
            insertcircles(n,arr[j],arr[j+1],ax[j],ax[j+1],str[j]);
            arr[j+1]=arr[j];

            j--;
            delay(10);
        }
        arr[j+1]=x;
        movecirleft(n,ax[i],ax[j+1],430,x,str[i]);
        movecirup(n,ax[j+1],430,arr[i],str[i],0);
    }

    char ch=(char)getch();


}

