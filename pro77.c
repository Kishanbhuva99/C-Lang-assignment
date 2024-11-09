#include<stdio.h>
int main()
{
    int n,i=1;

    printf("Enter Number to get Table :");
    scanf("%d",&n);
    printf("--------Table of %d------",n);
    while(i<=10)
    {
        printf("\n\t%d * %d = %d",n,i,n*i);
        i++;
    }
return 0;
}