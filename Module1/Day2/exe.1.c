#include <stdio.h>

unsigned long long expohexa(double *funnumber)
{
    double num = *funnumber;
    unsigned long long *p = (unsigned long long *)&num;
    unsigned long long hexa = (*p & 0x7FF0000000000000) >> 52;
    return hexa;
}

void expobinary(unsigned long long expoinhexa1, double *funnumber1)
{
    unsigned long long binaryexponent = 0;
    int i;
    for (i = 10; i >= 0; i--)
    {
        unsigned long long hexdigit = (expoinhexa1 >> (i * 4)) & 0xF;
        switch (hexdigit)
        {
        case 0:
            binaryexponent = (binaryexponent << 4) | 0b0000;
            break;
        case 1:
            binaryexponent = (binaryexponent << 4) | 0b0001;
            break;
        case 2:
            binaryexponent = (binaryexponent << 4) | 0b0010;
            break;
        case 3:
            binaryexponent = (binaryexponent << 4) | 0b0011;
            break;
        case 4:
            binaryexponent = (binaryexponent << 4) | 0b0100;
            break;
        case 5:
            binaryexponent = (binaryexponent << 4) | 0b0101;
            break;
        case 6:
            binaryexponent = (binaryexponent << 4) | 0b0110;
            break;
        case 7:
            binaryexponent = (binaryexponent << 4) | 0b0111;
            break;
        case 8:
            binaryexponent = (binaryexponent << 4) | 0b1000;
            break;
        case 9:
            binaryexponent = (binaryexponent << 4) | 0b1001;
            break;
        case 10:
            binaryexponent = (binaryexponent << 4) | 0b1010;
            break;
        case 11:
            binaryexponent = (binaryexponent << 4) | 0b1011;
            break;
        case 12:
            binaryexponent = (binaryexponent << 4) | 0b1100;
            break;
        case 13:
            binaryexponent = (binaryexponent << 4) | 0b1101;
            break;
        case 14:
            binaryexponent = (binaryexponent << 4) | 0b1110;
            break;
        case 15:
            binaryexponent = (binaryexponent << 4) | 0b1111;
            break;
        }
    }
    printf("Exponent in binary is ");
    for (i = 10; i >= 0; i--)
    {
        printf("%llu", (binaryexponent >> i) & 1);
    }
    printf("\n");
}

int main()
{
    double number, *ptr;
    unsigned long long expoinhexa;
    printf("Enter the number\n");
    scanf("%lf", &number);
    ptr = &number;
    expoinhexa = expohexa(ptr);
    printf("Exponent in hexadecimal is 0x%llx\n", expoinhexa);
    expobinary(expoinhexa, ptr);
    return 0;
}