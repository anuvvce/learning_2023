#include <stdio.h>

int setbitfun(int funsize, unsigned int funarray1[100]) {
    int count = 0, i, j;
    unsigned int number;
    for (i = 0; i < funsize; i++) {
        for (j = 0; j < sizeof(funarray1[i]) * 8; j++) {
            number = funarray1[i] & (1 << j);
            if (number != 0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int size, i, result;
    unsigned int array1[100];
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter the array elements in hexadecimal format\n");
    for (i = 0; i < size; i++) {
        scanf("%x", &array1[i]);
    }
    result = setbitfun(size, array1);
    printf("Total number of set bits is %d\n", result);
    return 0;
}
