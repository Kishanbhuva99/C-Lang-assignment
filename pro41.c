#include<stdio.h>
int main()
{
    int height;

    printf("ENter HEIGHT(centimeter) : ");
    scanf("%d",&height);

    if (height<=160)
    {
        printf("\tPerson is Smaller");
    }
    else if ((height>160)&&(height<=180))
    {
        printf("\tPerson is Average");
    }
    else
    {
        printf("\tperson is Taller");
    }
    
    
return 0;
}