#include <stdio.h>
int smallestdigit(int number1)
{
    int smallest = 9;
    while (number1 != 0)
    {
        int rem = number1% 10;
        if (rem < smallest)
        {
            smallest = rem;
        }
        number1 /= 10;
    }
    return smallest;
}
int largestdigit(int number2)
{
    int largest = 0;
    while (number2 != 0)
    {
        int rem = number2 % 10;
        if (rem > largest)
        {
            largest = rem;
        }
        number2 /= 10;
    }
    return largest;
}

void smallestandlargest(int arr[100], int n)
{
    int i;
    for ( i = 0; i < n; i++)
        {
        int number3 = arr[i];
        if (number3 < 10)
        {
            printf("Number %d: Not Valid\n", number3);
        } else
        {
            int smallest = smallestdigit(number3);
            int largest = largestdigit(number3);

            printf("Number %d: Smallest digit: %d, Largest digit: %d\n", number3, smallest, largest);
        }
    }
}

int main()
{
    int n,i;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Not Valid\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallestandlargest(arr, n);

    return 0;
}

