#include <stdio.h>
#include <stdlib.h>
void Sort(int iRecordNum,int iType){
    int x=0;
    int y=0;
    x=x+1;
    while(iRecordNum-->0){
        if(0==iType){
            x=x+2;
            //break;
        }
        else
        {
            if(1==iType)
            {
                x=y+10;
            }else
            {
                x=y+20;
            }
        }
    }
    printf("x=%d\n",x);
}
int main()
{

    Sort(0,0);
    Sort(0,1);
    Sort(0,2);
    printf("À≥–Ú≤‚ ‘\n");

    Sort(1,0);
    Sort(2,0);
    Sort(3,0);
    printf("—≠ª∑≤‚ ‘\n");

    Sort(1,-1);
    Sort(1,1);
    Sort(1,2);
    Sort(1,3);
    printf("∑÷÷ß≤‚ ‘\n");

}
