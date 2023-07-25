#include<stdio.h>
int main ()
{
   int n,p=0,q=0;
    printf("Enter a number - ");
    scanf("%d",&n);

    q=n;
    for(q;q>0;q--)
    {
        p=n%q;
        if(p==0)
        {
            printf("%d ",q);
        }
    }
}
