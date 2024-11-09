#include<stdio.h>
#include<string.h>
    char str[50];
int palin()
{
    int length,palin=1;
    length=strlen(str);
    length=length-1;
    for (int i = 0; str[i] < str[length]; i++)
    {
        if(str[i]!=str[length])
        {
            palin=0;
        }
    }

        if(palin==1)
        {
            printf("\nThis string is Palindrome.");
        }
        else
        {
            printf("\nThis String is not Palindrome");
        }
}

int main()
{
    printf("Enter String : ");
    gets(str);
    palin();
return 0;
}