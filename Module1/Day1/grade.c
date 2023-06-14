#include<stdio.h>
int grade(int funmarks)
{
      if(funmarks>=90 && funmarks<=100)
      {
          return 'A';
      }
      else if(funmarks>=75 && funmarks<=89)
      {
          return 'B';
      }
      else if(funmarks>=60 && funmarks<74)
      {
          return 'C';
      }
      else if(funmarks>=50 && funmarks<=59)
      {
          return 'D';
      }
      else if(funmarks>=0 && funmarks<=49)
      {
          return 'F';
      }
      else
      {
          return 'X';
      }
}
int main()
{
    int marks;
    char result;
    printf("Enter the marks obtained by the student\n");
    scanf("%d",&marks);
    result=grade(marks);
    if(result=='X')
    {
        printf("Invalid Marks. Please provide valid marks\n");
    }
    else
    {
    printf("The grade for the marks %d is: %c\n",marks,result);
    }
    return 0;
}