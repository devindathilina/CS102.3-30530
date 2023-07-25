#include<stdio.h>
int main ()
{
    int a,b=0,sum=0;
    printf("Enter a positive integer - ");
    scanf("%d",&a);

    if(a<0)
    {
        while(a<0)
        {
            printf("Please enter positive integer\n");
            scanf("%d",&a);
        }
    }

    while(a>0)
    {
        b=a%10;
        sum+=b;//sum=sum+b
        a/=10;//a=a/10
    }
    printf("The sum of all the digits - %d",sum);


}
