#include"dosorting.h"
#include"menue.h"
int main()
{
    int i,j,k,l,m,n;
    for(;;)
    {
        initwindow(1360,700,"sort");
        i=menu_bars_sortalg();
        if(i==11)
        {
            bubblesort();
        }
        if(i==12)
        {
            insertsort();
        }
        if(i==13)
        {
            selectionsort();
        }

    }


}
