#include<stdio.h>
void bitprint(unsigned int number1)
{
    int i;
    unsigned int mask=1<<31;
    for(i=0;i<32;i++)
    {
        if(number1&mask)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
        mask>>=1;
    }
    printf("\n");
}
int main()
{
    unsigned int number;
    printf("Enter a number which is of 32bit\n");
    scanf("%u",&number);
    printf("The binary bits of %u is:\n",number);
    bitprint(number);
    return 0;
}
