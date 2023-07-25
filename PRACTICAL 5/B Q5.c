#include<stdio.h>
int main ()
{
    int empno,wh,x,over,co1=0,co2=0,per=0;
    printf("Enter your employee number and over time hours worked\n");
    for(x=0;x==0;)
    {
        scanf("%d %d",&empno,&wh);
        if(empno==-999)
        {
            x=1;
        }

        if(wh<=40)
        {
            over=wh*150;
        }
        else
        {
            over=wh*200;
        }

        if(over>=4000)
        {
            co2++;
        }
        co1++;
        printf("Employee no: %d\n",empno);
        printf("Over time payment: %d\n\n",over);
    }
    per=((float)co2/co1)*100;
    printf("The percentage of employees whose Over Time Payment exceeding the Rs. 4000/- is %d%%",per);
}

