#include<stdio.h>
int main ()
{
    int empno,emps,x,c=0;
    printf("Enter the employee number and salary \n");
    for(x=0;x==0;)
    {
        scanf("%d %d",&empno,&emps);
        if(empno==-999)
        {
            x=1;
        }

        if(emps>=5000)
        {
            c++;
        }
    }
    printf("The number of employees whose Basic Salary >=5000 is %d",c);
}
