#include<stdio.h>
int main ()
{int x,co=0,n=0,p=0,z=0;

    for(co;co<10;co++)
    {
        printf("Enter number - ");
        scanf("%d",&x);
        if(x==0)
        {
            z++;
        }
        else if(x<0)
        {
            n++;
        }
        else
        {
            p++;
        }
    }
   printf("There are \n %d positiv numbers \n %d negtive number \n %d Zeros",p,n,z);
}


