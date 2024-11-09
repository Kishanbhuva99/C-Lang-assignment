#include<stdio.h>
int main()
{
    int n,a,max=0;

    printf("Enter NUMBER to find max :");
    scanf("%d",&n);

    while (n!=0)
    {
        a=n%10;
        if(a>max)
        {
                max=a;
        }
        n=n/10;
    }
    printf("MAX DIGIT is %d",max);
return 0;
}