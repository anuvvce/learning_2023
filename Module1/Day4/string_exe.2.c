#include<stdio.h>
int convertstringtointeger(char funword[100])
{
    int result=0;
    for(int i=0;funword[i]!='\0';i++)
    {
        result=result*10+(funword[i]-'0');
    }
    return result;
}
int main()
{
    char word[100];
    int resultmain;
    printf("Enter an integer\n");
    scanf("%s",word);
    resultmain=convertstringtointeger(word);
    printf("The integer converted value is %d\n",resultmain);
    return 0;
}
