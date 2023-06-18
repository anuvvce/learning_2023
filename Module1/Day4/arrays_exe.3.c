#include<stdio.h>
void reversearray(int sizefun,int arrayfun[100])
{
    int first=0,last=sizefun-1,temp;
    while(first<last)
    {
        temp=arrayfun[first];
        arrayfun[first]=arrayfun[last];
        arrayfun[last]=temp;
        first++;
        last--;
    }
}

int main()
{
    int size,array1[100],i,j,k;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Enter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("The normal array is: ");
    for(j=0;j<size;j++)
    {
    printf("%d",array1[j]);
    printf(" ");
    }
    printf("\n");
    reversearray(size,array1);
    printf("The reversed array is: " );
    for(k=0;k<size;k++)
    {
    printf("%d",array1[k]);
    printf(" ");
    }
    printf("\n");
    
    return 0;
}