#include<bits/stdc++.h>
#include<graphics.h>
#include<math.h>
#include<string.h>
using namespace std;

int getcirnum(int x,int y);
int getaxisnum();
int getnumbers(int n,int ax[],int arr[],char str[20][1000]);
int getposnum(int n,int ax[],int arr[],char str[20][1000]);
int allignnumbers();
int num_in();





int getcirnum(int x,int y)
{
    char strr[10],c;
    int i=0,a[10],n,j,m;
    while(1)
    {
        c=(char)getch();

        if(c=='\r'&&i>=1)
        {
            break;
        }
        if(i==1&&c>='0'&&c<='2')
        {
            strr[i]=c;
            i++;
            strr[i]='\0';
        }
        if(i==0&&c>='1'&&c<='9')
        {
            strr[i]=c;
            i++;
            strr[i]='\0';
            if(c>'1')
            {
                i+=2;
            }
        }
        settextstyle(BOLD_FONT,HORIZ_DIR,6);
        setcolor(BLUE);
        outtextxy(x,y,strr);
    }
    n=0;
    for(j=0,i=strlen(strr)-1; i>=0; i--,j++) //turns string into number//
    {
        m=strr[i]-'0';
        n=n+m*(pow(10,j));
    }
    return n;
}

int getaxisnum(int n,int ax[])
{
    int i,j,k,l,m;
    k=1360/(n+1);
    m=0;
    for(i=0; i<n; i++)
    {
        ax[i]=m+k;
        m+=k;
    }
}




int getnumbers(int i,int ax[],int arr[],char str[])
{
    int j,k,l,m,num,v;
    char c;
    l=1;
    j=0;
    num=0;
    while(1)
    {
        c=(char)getch();

        if(j>=6&&c=='\r')
        {
            break;
        }
        if(j>=6&&c!='\r')
        {
            continue;
        }
        if(c=='\r')
        {
            if(l==-1&&j>1)
            {
                break;
            }
            if(l==1&&j>=1)
            {
                break;
            }
            else if(j==0||(l==-1&&j==1))
            {
                continue;
            }
        }
        if(j==0&&c=='-')
        {
            str[j]=c;
            l=-1;
            j++;
            str[j]='\0';
        }
        else if(j<6&&c>='0'&&c<='9')
        {
            str[j]=c;
            j++;
            str[j]='\0';
        }

        settextstyle(BOLD_FONT,HORIZ_DIR,1);
        setcolor(BLUE);
        outtextxy(ax[i]-30,325,str);
    }
    num=0;
    if(l==-1)
    {

        for(j=0,v=strlen(str)-1; v>=1; v--,j++) //turns string into number//
        {
            m=str[v]-'0';
            int h=m*(pow(10,j));
            num=num+h;
            if(v==2||v==4)
            {
                h++;
            }
            printf("%d\n",num);
        }
        arr[i]=l*num;

    }
    num=0;
    if(l==1)
    {

        for(j=0,v=strlen(str)-1; v>=0; v--,j++) //turns string into number//
        {
            m=str[v]-'0';
            int h=m*pow(10,j);
            if(v==2||v==4)
            {
                h++;
            }
            num=num+h;
            printf("%d\n",h);

        }

        arr[i]=num;
    }
    printf("%s\n",str);


}



int getposnum(int i,int ax[],int arr[],char strr[1000])
{
    int j=0,k,l,m;
    char c;

        j=0;
        while(1)
        {
            c=(char)getch();
            if(j>=6&&c=='\r')
            {
                break;
            }
            if(j<6&&c>='0'&&c<='9')
            {
                strr[j]=c;
                j++;
                strr[j]='\0';
            }

                settextstyle(BOLD_FONT,HORIZ_DIR,1);
                setcolor(BLUE);
                outtextxy(ax[i]-30,325,strr);

        }

        int nu=0,h,d,s,g;
        for(k=0,l=strlen(strr)-1; l>=0; l--,k++)
        {
            m=strr[l]-'0';
            m=m*pow(10,k);
            if(k==2||k==4) m++;
            nu+=m;
        }
        arr[i]=nu;



}

