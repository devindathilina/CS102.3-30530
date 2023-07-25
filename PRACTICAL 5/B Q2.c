#include<stdio.h>
int main ()
{
    int m,co,max,min,t=0;
    float avg;
    printf("Enter the marks\n");
    scanf("%d",&m);

    max=m;
    min=m;
    for(co=0;co<9;co++)
    {

        scanf("%d",&m);
        t+=m;
        if(max<m)
        {
            max=m;
        }

        if(min>m)
        {
            min=m;
        }
    }
    avg=(float)t/10;

    printf("The maximum number is %d\n",max);
    printf("The minimum number is %d\n",min);
    printf("The average is %f",avg);

}
