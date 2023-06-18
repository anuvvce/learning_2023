#include<stdio.h>
void sumave(int sizefun,int arrayfun[100])
{
    int sum=0;
    float average;
    for(int i=0;i<sizefun;i++)
    {
        sum=sum+arrayfun[i];
    }
    average=(float)sum/sizefun;
    printf("The sum of give array is %d\n",sum);
    printf("The average of the given array is %.2f",average);
}
int main()
{   
    int size,array1[100],i;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
    {
    scanf("%d",&array1[i]);
    }
    sumave(size,array1);
    return 0;
}