#include<stdio.h>
int main ()
{
    int x,co,n=0,tot=0;
    float avg;
    printf("Enter items prices\n");
    for(co=0;co<10;co++)
    {
        scanf("%d",&x);
        tot+=x;
        if(x>200)
        {
            n++;
        }
    }
    avg=(float)tot/10;
    printf("The average value is %f\n",avg);
    printf("The number of items which greater than 200 is %d",n);
}
