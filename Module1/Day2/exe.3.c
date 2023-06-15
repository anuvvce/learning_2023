#include<stdio.h>
int sumfun(int funsize,int funarray[100])
{
    int i=0,sum=0;
    while(i<funsize)
    {
        sum=sum+funarray[i];
        i=i+2;
    }
    return sum;
}
int main()
{
    int size,arraymain[100],result,i;
    printf("Enter the size of an array\n");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arraymain[i]);
    }
    result=sumfun(size,arraymain);
    printf("The sum of alternate elements in an array is: %d\n",result);
    return 0;
}
