#include <stdio.h>
int pattern(int n)
{
	int i,j;
    for ( i = n; i >= 1; i--)
    {

        for ( j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printspace(n - i);
        reverse(i);
		printf("\n");
    }
}

int printspace(int n) {
	int i;
    for ( i = 1; i <= 2*(n); i++)
    {
        printf(" ");
    }
}

int reverse(int n) {
	int i;
    for ( i = n; i >= 1; i--)
    {
        printf("%d", i);
    }
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}