#include<stdio.h>
void minmaxfun(int sizefun,int arrayfun[100])
{
    int min,maxi,i;
    min=maxi=arrayfun[0];
    for(i=0;i<sizefun;i++)
    {
           if(min>arrayfun[i])
            {
                min=arrayfun[i];
            }
            else if(maxi<arrayfun[i])
            {
                maxi=arrayfun[i];
            }
    }
    printf("The minimum of all the elements in the array is %d\n",min);
    printf("The maximum of all the elements in the array is %d\n",maxi);

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
    minmaxfun(size,array1);
    return 0;
}