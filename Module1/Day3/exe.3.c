#include <stdio.h>
int largestnum(int number1) {
    int largest = 0,i,j;
    int temp = number1;
    for ( i = 0; i < 4; i++)
    {
        int divisor = 1;
        for (j = 0; j < i; j++)
        {
            divisor *= 10;
        }
        int result = (temp / (divisor * 10)) * divisor + (temp % divisor);
        if (result > largest)
        {
            largest = result;
        }
    }
    return largest;
}
int main() {
    int number,returnedresult;
    printf("enter a 4-digit number: ");
    scanf("%d", &number);
    returnedresult = largestnum(number);
    printf("largest number by deleting a single digit is %d\n", returnedresult);
    return 0;
}