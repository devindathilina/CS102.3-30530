#include<stdio.h>
int main ()
{
    int x,fac=1,i;

    printf("Enter a number to find the factorial value\n");
    scanf("%d",&x);

    if(x<0)
    {
        while(x<0)
        {
            printf("Please enter positive value or zero\n");
            scanf("%d",&x);
        }
    }

    if(x==0)
    {
        printf("The factorial value is 1\n");
    }
    else
    {
        for(i=1;i<=x;i++)
        {
            fac*=i;
        }
        printf("The factorial value is %d\n",fac);
    }


}
