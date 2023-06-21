#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[50];
    int roll_num;
    float marks;
};
typedef struct student student;
void scandata(student *fundata,int funnumber)
{
    for(int i=0;i<funnumber;i++)
    {
        printf("Enter the details for student %d (name roll_number marks)\n",i+1);
        scanf("%s %d %f",fundata[i].name, &fundata[i].roll_num, &fundata[i].marks);
        printf("\n");
    }
}
void displaydata(student *fundata1,int funnumber1)
{
    for (int i = 0; i < funnumber1; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n",fundata1[i].name);
        printf("Roll Number: %d\n", fundata1[i].roll_num);
        printf("Marks: %.2f\n", fundata1[i].marks);
        printf("\n");
    }
}
int main()
{
    int number;
    printf("Enter the number of students\n");
    scanf("%d",&number);

    student* dataptr=(student*)malloc(sizeof(student)*number);

    scandata(dataptr,number);
    displaydata(dataptr,number);

    free(dataptr);
    return 0;
}
