//Write a program in C to find the number of times a given word 'is' appears in the given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],findWord[50];
    int wordCount=0;
    printf("Enter string : ");
    gets(str);
    printf("Enter word to find : ");
    gets(findWord);
    int lenght=strlen(findWord);
//    lenght--;
    for (int i = 0; str[i] != '\0'; i++)
    {
        char substr[50];
        if(str[i]==' ')
        {
            substr[i]='\0';
            int sublen=strlen(substr);
            // sublen--;
            printf("%d\n",lenght);
            printf("%d\n",sublen);
            if (sublen==lenght)
            {
                //printf("check %d\n",i);
                int check=0;
                for (int j = 0; findWord[j] != '\0'; j++)
                {
                    if (findWord[j]==substr[j])
                    {
                        check++;
                    }
                }
                if(check==lenght)
                {
                    wordCount++;
                }   
            }
            
        }
        else
        {
            substr[i]=str[i];
            
        }
    }
    
    printf("Given word %s appeared %d times in String",findWord,wordCount);
return 0;
}