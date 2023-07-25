#include<stdio.h>
int main ()
{
    int a,b,c=1;
    printf("Enter a value\n");
    scanf("%d",&a);
    printf("Now enter the power of it\n");
    scanf("%d",&b);

    if(b==0)
    {
        c=1;
    }
    else
    {
        for(b;b>0;b--)
        {
            c=c*a;
        }
    }
    printf("The answer is %d",c);
}
