// WAP
#include<stdio.h>
int main()
{
    int maths,phy,chem,total,totalPM;

    // printf("Enter Marks of MATHS :");
    // scanf("%d",&maths);
    // printf("Enter Marks of Physics :");
    // scanf("%d",&phy);
    // printf("Enter Marks of Chemistry :");
    // scanf("%d",&chem);

    phy=65;
    maths=72;
    chem=51;

    total=maths+phy+chem;
    totalPM=phy+maths;

    //printf("m%d p%d c%d t%d tPM%d",maths,phy,chem,total,totalPM);
//      Marks in Maths >=65 and Marks in Phy >=55 and Marks 
// in Chem>=50 and Total in all three subject >=190 or Total in Maths and 
// Physics >=140

    maths>=65&&phy>=55&&chem>=50&&(total>=190||totalPM>=140)?printf("The candidate is eligible"):printf("The candidate is not eligible");


    
return 0;
}