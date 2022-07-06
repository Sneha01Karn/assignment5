#include<stdio.h>
#include<conio.h>
int main()
{
    float SP,CP,PP;
    printf("Enter cost price:");
    scanf("%f",&CP);
    printf("Enter selling price:");
    scanf("%f",&SP);
    PP=0.01*(SP-CP)/CP;
    printf("Profit percentage is %f",PP);
    getch();
}
