#include<stdio.h>
struct box
{
    double length;
    double width;
    double height;
};
typedef struct box box;
double calcvolume(box* boxptr1)
{
    double funvolume=(*boxptr1).length * (*boxptr1).width * (*boxptr1).height;
    return funvolume;
}
double calcarea(box* boxptr2)
{
    double funarea= 2 * ((*boxptr2).length * (*boxptr2).width + (*boxptr2).length * (*boxptr2).height + (*boxptr2).width * (*boxptr2).height);
    return funarea;
}
int main()
{   
    box mainbox;
    box* boxptr=&mainbox;
    double volume,area;
    printf("Enter the length of the box\n");
    scanf("%lf",&(*boxptr).length);
    printf("Enter the width of the box\n");
    scanf("%lf",&(*boxptr).width);
    printf("Enter the height of the box\n");
    scanf("%lf",&(*boxptr).height);
    volume=calcvolume(boxptr);
    area=calcarea(boxptr);
    printf("The volume of the box is: %.2lf\n",volume);
    printf("The surface area of the box is: %.2lf\n",area);
    return 0;
}