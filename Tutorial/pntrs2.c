#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    double salary;
};

void initializeEmployee(struct Employee *e, int id, const char *name, double salary)
{
    e->id = id;
    strcpy(e-> name, name);
    e-> salary = salary;
}

void printEmployee(const struct Employee *e)
{
    printf("\nID: %d\nName: %s\nSalary: %.2f", e->id, e->name, e->salary);
}

void updateSalary(struct Employee *e, double newSalary)
{
    e->salary = newSalary;
}

void giveBonus(struct Employee *e, double bonus)
{
    e->salary += bonus;
}

int compareSalary(const struct Employee *e, const struct Employee *e2)
{
    return (e->salary > e2->salary) - (e->salary < e2 -> salary);
}

int main(void)
{
    struct Employee emp1;
    struct Employee emp2;

    initializeEmployee(&emp1, 1, "Kise", 50000.0);
    initializeEmployee(&emp2, 2, "Rhabie", 100000.0);

    printEmployee(&emp1);
    printEmployee(&emp2);

    giveBonus(&emp1, 500000.0);
    printEmployee(&emp1);

    giveBonus(&emp2, 750000.0);
    printEmployee(&emp2);

    updateSalary(&emp1, 100000.0);
    printEmployee(&emp1);

    updateSalary(&emp2, 250000.0);
    printEmployee(&emp2);

    int salaryComparison = compareSalary(&emp1, &emp2);

    if (salaryComparison > 0)
    if (salaryComparison > 0) 
    {
        printf("\nEmployee 1 has a higher salary than Employee 2.\n");
    } 
    else if (salaryComparison < 0) 
    {
        printf("\nEmployee 2 has a higher salary than Employee 1.\n");
    } 
    else 
    {
        printf("\nEmployee 1 and Employee 2 have equal salaries.\n");
    }
}















