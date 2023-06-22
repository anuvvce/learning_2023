#include <stdio.h>

struct student
{
    char name[50];
    int marks;
};
typedef struct student Student;
void swap(Student *a, Student *b) 
{
    Student temp = *a;
    *a = *b;
    *b = temp;
}

void sortstudents(Student students[], int size) 
{
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    
    Student students[size];
    
    printf("Enter the details of each student:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }
    
    printf("\nBefore sorting:\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%s - %d\n", students[i].name, students[i].marks);
    }
    
    sortstudents(students, size);
    
    printf("\nAfter sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%s - %d\n", students[i].name, students[i].marks);
    }
    
    return 0;
}
