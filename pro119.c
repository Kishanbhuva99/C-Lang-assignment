//Write a program in C to find the largest and smallest words in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    //baki che-------------------------------------------
    char str[100],maxWord[100],minword[100];
    int max=0,min=0;
    char word[100];
    int j=0;
    fflush(stdin);
    printf("Enter string :");
    gets(str);

    for (int i = 0; str[i] !='\0'; i++)
    {
        if (isspace(str[i]))
        {
            word[j]='\0';
            int len=strlen(word);
            if(len>=max)
            {
                strcpy(maxWord,word);
                printf("%s--max\n",maxWord);
            }
            if(len<=min)
            {
                strcpy(minword,word);
                printf("%s--min\n",minword);

            }
            j=0;
        }
        else
        {
            word[j]=str[i];
            j++;
        } 
    }
    // word[j]='\0';
    // int len=strlen(word);
    //         if(len>max)
    //         {
    //             strcpy(maxWord,word);
    //         }
    //         else if(len<max)
    //         {
    //             strcpy(minword,word);
    //         }
    printf("Largest Word --> %s\n",maxWord);
    printf("Smallest Word --> %s\n",minword);
return 0;
}