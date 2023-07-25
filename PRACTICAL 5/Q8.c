 #include<stdio.h>
 int main()
 {
 int gh,hj=0,et=0,count=0,et3=0,total=0,nh=1,count2=0,ls=0;
    printf("Enter a number to find the given number is an Armstrong Number or not\n");
    scanf("%d",&gh);
    hj=gh;
    ls=gh;

    for(;hj>0;hj/=10)
    {
        et=hj%10;
        count+=1;
    }

    for(;gh>0;gh/=10)
    {
        et3=gh%10;
        if(count==0)
        {
            nh=1;
        }
        else
        {
            count2=count;
            nh=1;
            for(count2;count2>0;count2--)
            {
                nh=nh*et3;
            }
        }
        total+=nh;
    }

    if(total==ls)
    {
        printf("This is an Armstrong Number");
    }
    else
    {
        printf("This is not an Armstrong Number");
    }


 }
