#include<stdio.h>
struct complex
{
    double real;
    double imag;
};
typedef struct complex complex;
void reading(complex* funnumber)
{   
    scanf("%lf %lf",&(funnumber->real),&(funnumber->imag));
}
void writing(complex* funnumber)
{
    printf("%.2lf + %.2lfi",funnumber->real,funnumber->imag);
}
complex addition(complex* funnumber1,complex* funnumber2)
{
    complex result;
    result.real = funnumber1->real + funnumber2->real;
    result.imag = funnumber1->imag + funnumber2->imag;
    return result;;
}
complex multiplication(complex* funnumber1,complex* funnumber2)
{
    complex result;
    result.real = funnumber1->real * funnumber2->real - funnumber1->imag * funnumber2->imag;
    result.imag = funnumber1->real * funnumber2->imag + funnumber1->imag * funnumber2->real;
    return result;
}
int main()
{
    complex number1,number2,sum,product;
    printf("Enter the first complex number\n");
    reading(&number1);
    printf("\n");
    printf("Enter the second complex number\n");
    reading(&number2);
    printf("\n");

    printf("The first complex number is: ");
    writing(&number1);
    printf("\n");
    printf("The second complex number is: ");
    writing(&number2);
    printf("\n");
     
    sum = addition(&number1, &number2);
    printf("Sum of the two complex numbers:\n");
    writing(&sum);
    printf("\n");
    product = multiplication(&number1, &number2);
    printf("Product of the two complex numbers:\n");
    writing(&product);
    printf("\n");
    return 0;
}