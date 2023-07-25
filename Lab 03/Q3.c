#include<stdio.h>
int main()
{
    char  en[20];
    int bs,inc,ns;

    printf("Enter Employee name -");
    scanf("%s",&en);
    printf("Enter Basic salary -");
    scanf("%d",&bs);
    if (bs<5000)
    {
        ns=bs+(bs*5/100);
    }
    else if (10000<=bs)
    {
        ns=bs+(bs*15/100);
    }
    else
    {
        ns=bs+(bs*10/100);
    }
    printf("Empolyee name is - %s\n",en);
    printf("New Salary is - %d",ns);
}
