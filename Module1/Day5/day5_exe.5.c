#include <stdio.h>
#include <stdlib.h>

struct student 
{
    char name[50];
    int roll_num;
    float marks;
};
typedef struct student student;
void swapfields(student* s1, student* s2) 
{
    int i = 0;
    int roll_temp = s1->roll_num;
    s1->roll_num = s2->roll_num;
    s2->roll_num = roll_temp;

    float marks_temp = s1->marks;
    s1->marks = s2->marks;
    s2->marks = marks_temp;

    while (s1->name[i] != '\0' || s2->name[i] != '\0') {
        char temp = s1->name[i];
        s1->name[i] = s2->name[i];
        s2->name[i] = temp;
        i++;
    }
}
int main() {
    student s1, s2;

    printf("Enter the details of student 1 (name roll_number marks):\n");
    scanf("%s %d %f", s1.name, &s1.roll_num, &s1.marks);

    printf("Enter the details of student 2 (name roll_number marks):\n");
    scanf("%s %d %f", s2.name, &s2.roll_num, &s2.marks);

    printf("\nBefore swapping:\n");
    printf("Student 1:\nName: %s\nRoll Number: %d\nMarks: %.2f\n", s1.name, s1.roll_num, s1.marks);
    printf("\n");
    printf("Student 2:\nName: %s\nRoll Number: %d\nMarks: %.2f\n", s2.name, s2.roll_num, s2.marks);

    swapfields(&s1, &s2);

    printf("\nAfter swapping:\n");
    printf("Student 1:\nName: %s\nRoll Number: %d\nMarks: %.2f\n", s1.name, s1.roll_num, s1.marks);
    printf("\n");
    printf("Student 2:\nName: %s\nRoll Number: %d\nMarks: %.2f\n", s2.name, s2.roll_num, s2.marks);

    return 0;
}
