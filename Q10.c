#include<stdio.h>
#include<conio.h>
int main()
{
    float b,h,A;
    printf("Enter base of triangle:");
    scanf("%f",&b);
    printf("Enter height of triangle:");
    scanf("%f",&h);
    A=0.5*b*h;
    printf("Area of triangle is %f",A);
    getch();
}
