#include<stdio.h>
int main ()
{
    int x,no;
    printf("Enter your number - ");
    scanf("%d",&no);
    x=no%2;
    if(x==0)
    {
        printf("%d is even number",no);
    }
    else
    {
        printf("%d is odd number",no);
    }
}
