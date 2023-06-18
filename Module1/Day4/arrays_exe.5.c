#include<stdio.h>
#include<stdlib.h>
int oddevenindex(int sizefun,int arrayfun[100])
{
    int sumeven=0,sumodd=0,i;
    for(i=0;i<sizefun;i++)
    {
        if(i%2==0)
        {
            sumeven=sumeven+arrayfun[i];
        }
        else
        {
            sumodd=sumodd+arrayfun[i];
        }
    }
    return (sumeven-sumodd);                                    
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
    diff=oddevenindex(size,array1);
    printf("The difference even and odd indexed elements is: %d\n",abs(diff));
    return 0;
}