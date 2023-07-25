#include<stdio.h>
int main ()
{
int yr;
float bsal;
char r,c;
 printf("Enter the basic salary= ");
 scanf("%f",&bsal);

 printf("Enter the year of services= ");
 scanf("%d",&yr);

 printf("Enter the 'C' if the city is colombo= ");
 scanf("%s",&r);

 if(bsal<=25000){
    bsal=bsal+(bsal*10);}

 else if(25000<=bsal<=50000){
  bsal=bsal+(bsal*12);}

  else{
    bsal=bsal+(bsal*15);}

 if(yr>5){
    bsal=bsal+(bsal*10);
 }
 if(c==r)
 {
  bsal=bsal+2500;
 }
 printf("The Gross Salary is= %.2f \n",bsal);
}
