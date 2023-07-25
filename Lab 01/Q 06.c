#include <stdio.h>
int main ()
{
  char sname[20];
  int byear,age;
  printf("Enter your name - ");
  scanf("%s",&sname);
  printf("Enter your birth year - ");
  scanf("%d",&byear);
  age=2023-byear;
  printf("Student name is %s\n",sname);
  printf("Age is - %d",age);
}
