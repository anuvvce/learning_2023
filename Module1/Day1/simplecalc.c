#include<stdio.h>
double calculator(double funnumber1,char funOperator,double funnumber2)
{
    switch(funOperator){
case '+':

        return funnumber1+funnumber2;
        break;
case '-':
        return funnumber1-funnumber2;
        break;
case '*':
        return funnumber1*funnumber2;
        break;
case '/':
        if(funnumber2!=0){
        return funnumber1/funnumber2;}
        else
        {
            return 'X';
        }
        break;
default:
    return 'Y';
    break;}
}
int main()
{
    double number1,number2,result;
    char Operator;
    printf("Enter the first number\n");
    scanf("%lf",&number1);
    printf("Enter the operator\n");
    scanf(" %c",&Operator);
    printf("Enter the second number\n");
    scanf("%lf",&number2);
    result=calculator(number1,Operator,number2);
    if('X'==result)
    {
        printf("Error: Number cannot be divided by 0\n");
    }
    else if('Y'==result)
    {
        printf("Invalid Operator. Please enter valid operator\n");
    }
    else
    {
       printf("The output is %.2lf\n",result);
    }

    return 0;
}