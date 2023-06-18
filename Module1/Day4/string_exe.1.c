#include<stdio.h>
#include<ctype.h>
void togglefun(char funword[])
{
    for(int i=0;funword[i]!='\0';i++)
    {
        if(isupper(funword[i]))
        {
            funword[i]=tolower(funword[i]);
        }
        else
        {
            funword[i]=toupper(funword[i]);
        }        
    }
}
int main()
{
    char word[100];
    printf("Enter a word\n");
    scanf("%s",word);
    togglefun(word);
    printf("The changed word is %s\n",word);
    return 0;
}