#include<stdio.h>
int usingternary(int funnumber1,int funnumber2)
{
    return funnumber1>funnumber2?funnumber1:funnumber2;
}
int main()
{
    int number1,number2,result;
    printf("Enter first number\n");
    scanf("%d",&number1);
    printf("Enter second number\n");
    scanf("%d",&number2);
    result=usingternary(number1,number2);
    printf("The biggest of two numbers is: %d\n",result);
    return 0;
}