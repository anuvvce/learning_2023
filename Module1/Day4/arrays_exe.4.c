#include<stdio.h>
#include<stdlib.h>
int evenfun(int sizefun,int arrayfun[100])
{
    int evensum=0,i;
    for(i=0;i<sizefun;i++)
    {
        if(arrayfun[i]%2==0)
        {
            evensum=evensum+arrayfun[i];
        }
    }
    return evensum;
    
}
int oddfun(int sizefun1,int arrayfun1[100])
{
    int oddsum=0,i;
    for(i=0;i<sizefun1;i++)
    {
        if(arrayfun1[i]%2!=0)
        {
            oddsum=oddsum+arrayfun1[i];
        }
    }
    return oddsum;
}
int main()
{
    int size,array1[100],i,diff;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }
    diff=evenfun(size,array1)-oddfun(size,array1);
    printf("The difference between even and odd elements is: %d\n",abs(diff));
    return 0;
}