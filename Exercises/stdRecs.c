#include <stdio.h>

typedef struct
{
    int idNumber;
    char name[50];
    int age;
    float tuitionFee;
} Student;


int main(void)
{
    Student student1 = {101, "Kise", 19, 50000};
    student1.age += 1;

    Student student2 = {1400119988, "Rhabie", 18, 45000.00};

printf("-------------------------------------------\n");
printf("Student ID: %d\n", student1.idNumber);
printf("Name: %s\n", student1.name);
printf("Age: %d\n", student1.age);
printf("Tuition Fee: %.2f\n", student1.tuitionFee);
printf("-------------------------------------------\n");

printf("Student ID: %d\n", student2.idNumber);
printf("Name: %s\n", student2.name);
printf("Age: %d\n", student2.age);
printf("Tuition Fee: %.2f\n", student2.tuitionFee);
printf("-------------------------------------------\n");
}
