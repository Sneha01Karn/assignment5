#include<stdio.h>
#include<conio.h>
int main()
{
    float x,y,z,Av;
    printf("Enter three numbers:");
    scanf("%f %f %f",&x,&y,&z);
    Av=(x+y+z)/3;
    printf("Average value is %f",Av);
    getch();
}
