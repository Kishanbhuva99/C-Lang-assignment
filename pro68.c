#include<stdio.h>
int main()
{
    int n,a,sum=0;

    printf("Enter NUMBER for summation :");
    scanf("%d",&n);

    while (n!=0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    printf("summation of given number is %d",sum);
return 0;
}