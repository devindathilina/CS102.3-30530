#include<stdio.h>
int main()
{
    int sd=0,count2=2,xy=1,in=0;
    printf("These are the first 10 numbers of Fibonacci Sequence\n");

    printf("0 1 ");
    for(count2;count2<=10;count2++)
    {
        in=sd+xy;
        printf("%d ",in);
        xy=in;
        sd=xy-sd;
    }

}
