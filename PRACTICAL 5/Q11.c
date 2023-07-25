#include<stdio.h>
int main ()
{
    int x,ans=0,y=0,co=0;
    printf("Enter a number ");
    scanf("%d",&x);

    y=x;
    for(y;y>0;y--)
    {
        ans=x%y;
        if(ans==0)
        {
            co+=1;//co=co+1;
        }
    }

    if(co==2)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("This is not a prime number");
    }
}
