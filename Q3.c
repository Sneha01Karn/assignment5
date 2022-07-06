#include<stdio.h>
#include<conio.h>
int main()
{
    float l,w,h,V;
    printf("Enter the edges of cuboid:");
    scanf("%f %f %f",&l,&w,&h);
    V=l*w*h;
    printf("Volume of cuboid is %f",V);
    getch();
}
