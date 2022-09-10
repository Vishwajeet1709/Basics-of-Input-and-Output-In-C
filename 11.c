#include<stdio.h>
int main()
{
    int time;
    printf("Enter time (HH:MM) : ");
    scanf("%d",&time);
    printf("\n %d hour(s), and %d minut(s).\n\n",time/100,time%100);
    return 0;
}

