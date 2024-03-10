#include <stdio.h>
#include <string.h>

struct Person
{
    int age;
    char name[50];
};

int main(void)
{
    struct Person person1, person2;

    struct Person *personPtr;

     personPtr = &person1;
     personPtr ->age = 25;
     strcpy(personPtr -> name, "Kise");
     printf("Person 1:\nAge: %d\nName: %s\n", personPtr->age, personPtr->name);

     personPtr = &person2;
     personPtr -> age = 24;
     strcpy(personPtr -> name, "Rhabie");
     printf("Person 2:\nAge: %d\nName: %s\n", personPtr->age, personPtr->name);

}
