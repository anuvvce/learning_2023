#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student 
{
    char name[20];
    int rollno;
    float marks;
};
void initializestudents(struct Student* students, int number)
{
    for (int i = 0; i < number; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

void parsestring(char* input, struct Student* students, int number1) 
{
    int count = 0;
    int length = strlen(input);
    int currentindex = 0;
    char temp[20];
    int tempindex = 0;

    while (currentindex < length && count < number1)
    {
        while (input[currentindex] != ' ') 
        {
            temp[tempindex++] = input[currentindex++];
        }
        temp[tempindex] = '\0';
        students[count].rollno = atoi(temp);
        tempindex = 0;
        currentindex++;

        while (input[currentindex] != ' ') 
        {
            students[count].name[tempindex++] = input[currentindex++];
        }
        students[count].name[tempindex] = '\0';
        tempindex = 0;
        currentindex++;

        while (currentindex < length && input[currentindex] != ' ') 
        {
            temp[tempindex++] = input[currentindex++];
        }
        temp[tempindex] = '\0';
        students[count].marks = atof(temp);
        tempindex = 0;
        currentindex++;

        count++;
    }
}

int main() {
    int MAX_INPUT_SIZE = 100;
    char input[MAX_INPUT_SIZE];

    printf("Enter the input string (roll_number name marks): ");
    scanf("%[^\n]%*c", input); 

    int number = 0;
    int i = 0;
    while (input[i] != '\0') {
        if (input[i] == ' ')
            number++;
        i++;
    }
    number = (number + 1) / 3;

    struct Student* students = (struct Student*)malloc(number * sizeof(struct Student));
    initializestudents(students, number);
    parsestring(input, students, number);

    for (int i = 0; i < number; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    free(students);

    return 0;
}
