#include<stdio.h>
int main ()
{
    int e,r,coun=0,w,o=1,total1=0,wo;
    printf("Enter a positive number to reverse all the digits\n");
    scanf("%d",&e);

    if(e<0)
    {
        while(e<0)
        {
            printf("Please enter positive integer\n");
            scanf("%d",&e);
        }
    }

    //counting how many digit have in the number
    if(e==0)
    {
        coun=1;
    }

    r=e;
    do
    {
        coun++;
        r/=10;
    }
    while(r>0);


    do
    {
        wo=coun;
        w=e%10;
        o=1;
        if(wo>1)
        {
            do
            {
                o=o*10;
                wo--;
            }
            while(wo>1);
        }
        coun--;
        w*=o;
        total1=total1+w;
        e/=10;
    }
    while(e>0);
    printf("The reverse order is %d",total1);
    /*
    please consider that, this is for my use
    the above program is too advanced.
    therefore we can also follow this method.

    int x,y,z;
    printf("Enter a number");
    scanf("%d",&x);

    do
    {
        y=x%10;
        z=z*10+y;
        x/=10;
    }
    while(x>0);
    printf("The reverse order is %d",z);
    */
}
