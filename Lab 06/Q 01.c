#include<stdio.h>
int main ()
{
    int arry[10],i,min,max,sum,rev;
    float avg;
    for (i=0;i<10;i++)
    {
        printf("Enter 10 elements %d is - ",i+1);
        scanf("%d",&arry[i]);
    }
    min = arry[0];
    for(i=0;i<10;i++)
    {
        if(arry[i]<min)
        {
            min=arry[i];
        }
    }
    printf("minimun element is %d\n",min);
    max=arry[0];
    for(i=0;i<10;i++)
    {
        if(arry[i]>max)
        {
            max=arry[i];
        }
    }
    printf("maximum element is %d\n",max);

    sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+arry[i];
    }
    avg=(float)sum/10.0;
    printf("Average is %.2f  \n",avg);

    for(i=0;i<10;i++)
    {
        rev=arry[i];
        arry[i]=arry[9 - i];
        arry[9 - 1]=rev;

    }

    printf("Reversed array is ",rev);
    for(i=9;i>=0;i--)
    {
        printf("%d ",arry[i]);
    }

    }
