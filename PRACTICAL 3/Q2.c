// Q 02
#include<stdio.h>
int main ()
{
    int n1,n2,n3,max,min;
    printf("Enter three Numbers - ");
    scanf("%d%d%d",&n1,&n2,&n3);
    max=n1;
    if (n2>max)
    {
        max=n2;
    }
    if(n3>max)
    {
        max=n3;
    }
    min=n1;
    if (n2<min)
    {
        min=n2;
    }
    if (n3<min)
    {
        min=n3;
    }
    printf("Enter largest number is %d\n",max);
    printf("Enter smallest number is %d",min);

}
