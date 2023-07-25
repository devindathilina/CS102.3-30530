#include<stdio.h>
int main ()
{
    int m,c=0,t=0;
    float avg;


    for(c;c<=10;c++)
    {
        printf("Enter your marks - ");
        scanf("%d",&m);
        t+=m;//t=t+m
    }
    avg=(float)t/10;

    if(avg<50)
    {
        printf("Fail!");
    }
    else
    {
        printf("Pass!");
    }


}
