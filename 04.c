#include<stdio.h>
int main()
{
    float R,A;  //Here "A" stands for area, and "R" stands for radius

    printf("Enter Radius to find Area : "); /*Asking for radius*/
    scanf("%f",&R);

    A=3.14*R*R;

    printf("Area of circle is %f having the radius %f",A,R);
    return 0;
}
