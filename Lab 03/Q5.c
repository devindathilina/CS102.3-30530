#include<stdio.h>
int main ()
{
  int n1,n2,n;
printf("Enter two integers - ");
scanf("%d %d",&n1,&n2);

    n=n1%n2;

    if(n==0)
    {
        printf("%d is a multiple of %d",n1,n2);
    }
    else
    {
        printf("%d is not a multiple of %d",n1,n2);
    }
    printf("\n\n");


}
