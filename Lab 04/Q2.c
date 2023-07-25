#include<stdio.h>
int main ()
{
    int n1,n2;
    char sym;
    float a;

    printf("Enter the First Number - ");
    scanf("%d",&n1);
    printf("Enter you want mathematical symble - ");
    scanf(" %c",&sym);
    printf("Enter the Second Number - ");
    scanf("%d",&n2);

    switch(sym)
    {


        case '+':a=(float)n1+(float)n2;break;
        case '-':a=(float)n1-(float)n2;break;
        case '/':a=(float)n1/(float)n2;break;
        case '*':a=(float)n1*(float)n2;break;

    }
    printf("Answer is - %.2f",a);
    scanf("");
}
