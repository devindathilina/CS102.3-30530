#include <stdio.h>
int main ()
{
    int mn;
    printf("Enter Month Number - ");
    scanf("%d",&mn);

    switch (mn)
    {
        case 1:printf("Month is January - January have 31 days");break;
        case 2:printf("Month is February - February have 28 days");break;
        case 3:printf("Month is March - March have 31 days");break;
        case 4:printf("Month is April - April have 30 days");break;
        case 5:printf("Month is May - May have 31 days");break;
        case 6:printf("Month is Month is June - June have 30 days");break;
        case 7:printf("Month is July - July have 31 days");break;
        case 8:printf("Month is August - August have 31 days");break;
        case 9:printf("Month is September - September have 30 days");break;
        case 10:printf("Month is October - October have 31 days");break;
        case 11:printf("Month is November - November have 30 days");break;
        case 12:printf("Month is December - December have 31 days");break;
        default:printf("Month is This non valid month number");
    }
}

