#include<stdio.h>
#define MAX 300
int total(int funphysics,int funmath,int funchemistry)
{
    return funphysics+funmath+funchemistry;
}
int percent(int funtotal_marks)
{
    return (funtotal_marks*100)/MAX;
}
int main()
{
    int roll_no;
    char name[100];
    float physics,math,chemistry,total_marks,percentage;
    printf("Enter the Roll Number of the student\n");
    scanf("%d",&roll_no);
    printf("Enter the name of the student\n");
    scanf(" %[^\n]",name);
    printf("Enter the marks of Physics\n");
    scanf("%f",&physics);
    printf("Enter the marks of Math\n");
    scanf("%f",&math);
    printf("Enter the marks of Chemistry\n");
    scanf("%f",&chemistry);
    total_marks=total(physics,math,chemistry);
    percentage=percent(total_marks);
    printf("Summary\n");
    printf("\n");
    printf("Roll No: %d\n", roll_no);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physics);
    printf("Math Marks: %.2f\n", math);
    printf("Chemistry Marks: %.2f\n", chemistry);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}