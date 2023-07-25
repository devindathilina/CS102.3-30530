// Q 03
#include<stdio.h>
int main ()
{
    float dt,avg;
    int time;

    printf("Enter Distance Travelled - ");
    scanf("%f",&dt);
    printf("Enter Time - ");
    scanf("%d",&time);

    avg=dt/(float)time;

    printf("The average distance is %.2f ms-1",avg);
}
