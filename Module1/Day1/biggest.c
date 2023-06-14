#include<stdio.h>
int biggest(int funnumber1,int funnumber2)
{
    if(funnumber1>funnumber2)
    {
        return funnumber1;
    }
    else
    {
        return funnumber2;
    }

}
int main()
{
    int number1,number2,result;
    printf("Enter the First Number\n");
    scanf("%d",&number1);
    printf("Enter the Second Number\n");
    scanf("%d",&number2);
    result=biggest(number1,number2);
    printf("The biggest number is: %d\n",result);
    return 0;
}
