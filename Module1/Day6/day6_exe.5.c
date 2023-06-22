#include <stdio.h>
#include <string.h>

struct student 
{
    char name[50];
    int marks;
};
typedef struct student Student;
int searchstudent(Student students[], int size, const char* name) 
{
    for (int i = 0; i < size; i++) 
    {
        if (strcmp(students[i].name, name) == 0) 
        {
            return i;
        }
    }
    return -1;
}

int main() 
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d", &size);
    
    Student students[size];
    
    printf("Enter the details of each student:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    char searchname[50];
    printf("\nEnter the name of the student to search: ");
    scanf("%s", searchname);

    int result = searchstudent(students, size, searchname);

    if (result != -1) 
    {
        printf("Student found at index %d\n", result+1);
        printf("Name: %s\n", students[result].name);
        printf("Marks: %d\n", students[result].marks);
    } else 
    {
        printf("Student not found\n");
    }

    return 0;
}
