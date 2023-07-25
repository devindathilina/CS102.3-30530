#include<stdio.h>
#define PI 3.14
int main ()
{
    int r;
    char m;
    float area,cir,vol;
    printf("If You want the Circumference of a circal,type 'C'\n");
    printf("If You want the Area of a circal,type 'A'\n");
    printf("If You want the Volume of a circal,type 'V' \n");
    scanf(" %c",&m);

    printf("Enter the Radius - ");
    scanf("%d",&r);
switch(m)
{
    case 'A':printf("area is %f",PI*r*r);
    break;
    case 'C':printf("Circal is %f",cir=2*PI*r);
    break;
    case 'V':printf("Volume is %f",vol=(4/3)*PI*r*r*r);
    break;
}

}

