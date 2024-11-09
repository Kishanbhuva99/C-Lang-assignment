#include<stdio.h>

void main()
{
    int width,lenght,height,area;

    printf("enter width :");
    scanf("%d",&width);
    printf("enter lenght :");
    scanf("%d",&lenght);
    printf("enter height :");
    scanf("%d",&height);

    area=2*((width*lenght)+(lenght*height)+(height*width));
    printf("area of rectangular is %d ",area);
    
}