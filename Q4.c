#include<stdio.h>
#include<conio.h>
int main()
{
    float SI,P,R,T;
    printf("Enter principal amount:");
    scanf("%f",&P);
    printf("Enter rate of interest:");
    scanf("%f",&R);
    printf("Enter time duration:");
    scanf("%f",&T);
    SI=0.01*P*R*T;
    printf("Simple interest is %f",SI);
    getch();
}
