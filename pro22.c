#include<stdio.h>
int main()
{
    float principleAmount,rate,time,amount,CompoundInterest;

    printf("\nEnter principle amount : ");
    scanf("%f",&principleAmount);
    printf("Enter rate : ");
    scanf("%f",&rate);
    printf("Enter time : ");
    scanf("%f",&time);

    amount=principleAmount*(1+rate/100)*time;
    CompoundInterest=amount-principleAmount;

    printf("<<<------------------------->>>");
    printf("\n Compound Interest is : %.2f",CompoundInterest);
return 0;
}