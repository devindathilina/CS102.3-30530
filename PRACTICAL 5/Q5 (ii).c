#include<stdio.h>
int main()
{
    int p,q,r;
    printf("Enter a number - ");
    scanf("%d",&p);

    do
    {
        q=p%10;
        r=r*10+q;
        p/=10;
    }
    while(p>0);
    printf("The reverse order is %d",r);

}
