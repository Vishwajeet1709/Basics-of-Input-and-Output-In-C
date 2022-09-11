//Program to calculate area of circle 
#include<stdio.h>
int main()
{
    float R,A;  //Here "A" stands for area, and "R" stands for radius

    printf("Enter Radius To Find Area Of Circle  : "); /*Asking for radius*/
    scanf("%f",&R);

    A=3.14*R*R;

    printf("Area of circle is %f having the radius %f.\n\n",A,R);
    return 0;
}
