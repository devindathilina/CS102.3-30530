#include<stdio.h>
int main ()

{
int ys;
float bs;
char r,c;


 printf("Enter the basic salary - ");
 scanf("%f",&bs);

 printf("Enter the year of services - ");
 scanf("%d",&ys);

 printf("Enter the 'c' if the city is colombo - ");
 scanf("%s",&r);

 if(bs<=25000)
    {
        bs=bs+(bs*10);
    }

 else if(25000<=bs<=50000)
    {
        bs=bs+(bs*12);
    }

  else
    {
        bs=bs+(bs*15);
    }

 if(ys>5)
    {
        bs=bs+(bs*10);
    }
 if(c==r)
 {
  bs=bs+2500;
 }

 printf("The Gross Salary is= %.2f \n",bs);
}
