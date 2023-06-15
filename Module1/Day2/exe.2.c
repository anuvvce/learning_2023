#include <stdio.h>
void swap(void* funvalue1, void* funvalue2, size_t size) {
    char* ptr1 = (char*)funvalue1;
    char* ptr2 = (char*)funvalue2;
    while (size--)
    {
        char temp = *ptr1;
        *ptr1++ = *ptr2;
        *ptr2++ = temp;
    }
}

int main() {

    printf("Enter the first value\n");
    double value1;
    char charvalue1;
    if (scanf("%lf", &value1) != 1) {
        scanf(" %c", &charvalue1);
    }
    printf("Enter the second value\n");
    double value2;
    char charvalue2;
    if (scanf("%lf", &value2) != 1) {
        scanf(" %c", &charvalue2); // Handle character input
    }

    if (charvalue1 || charvalue2)
    {
        printf("Before swap: charValue1 = %c, charValue2 = %c\n", charvalue1, charvalue2);
        swap(&charvalue1, &charvalue2, sizeof(char));
        printf("After swap: charValue1 = %c, charValue2 = %c\n", charvalue1, charvalue2);
    } else {
        printf("Numeric inputs detected. Swapping numbers.\n");
        printf("Before swap: value1 = %.2f, value2 = %.2f\n", value1, value2);
        swap(&value1, &value2, sizeof(double));
        printf("After swap: value1 = %.2f, value2 = %.2f\n", value1, value2);
    }

    return 0;
}
