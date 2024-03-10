#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char name[50];
    int age;
    float grade;
} Student;

Student *createStudent(const char *name, int age, float grade)
{
    Student *newStudent = (Student*) malloc(sizeof(Student));
    if (newStudent == NULL)
    {
        printf("Error allocating memory!\n");
        return NULL;
    }

    strncpy(newStudent -> name, name, sizeof(newStudent -> name));
    newStudent -> age = age;
    newStudent -> grade = grade;
    return newStudent;
}

void printStudent(const Student *student)
{
    if (student == NULL)
    {
        printf("Invalid student pointer");
        return NULL;
    }
    printf("\nName: %s\nAge: %d\nGrade: %.2f\n", student->name, student->age, student->grade);
}

void setStudentGrade(Student *student, float newGrade)
{
    if (student != NULL)
    {
        student -> grade = newGrade;
    }
    else
    {
        printf("Invalid student pointer!");
    }
}

int main(void)
{
    Student *student = createStudent("Rhabie", 19, 90.0);
    if(student != NULL)
    {
        printStudent(student);

        setStudentGrade(student, 92.0);
        
        printf("-------------------------------");
        printf("\nAfter grade update: \n");
        printStudent(student);

        free(student);
    }
}