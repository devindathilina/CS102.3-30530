#include<stdio.h>
int main ()
{
    int x,tot=0,a;
    printf("Enter numbers - ");
    scanf("%d",&x);
    if(x==-1)
    {
        printf("The total is %d",x);
    }
    else
    {
        for(a=0;a==0;)
        {
            tot+=x;//tot=tot+x;
            scanf("%d",&x);
            if(x==-1)
            {
                a=1;
            }
        }
        printf("The total is %d",tot);
    }
}
