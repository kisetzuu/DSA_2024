#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
    char *name;
    int id;
    float salary;
} Employee;

Employee *createEmployee(const char *name, int id, float salary)
{
    Employee *newEmployee = (Employee*)malloc(sizeof(Employee));
    if (newEmployee == NULL)
    {
        printf("Error allocating memory for new employee\n");
        return NULL;
    }

    newEmployee -> name = (char *)malloc(strlen(name) + 1);
    if(newEmployee -> name == NULL)
    {
        printf("Error allocating memory for employee name");
        return NULL;
    }

    strcpy(newEmployee -> name, name);

    newEmployee->id = id;
    newEmployee -> salary = salary;

    return newEmployee;
}

Employee **addEmployee(Employee **database, int *size, Employee *newEmployee) {
    // Resize the database array to hold one more Employee*
    Employee **updatedDatabase = realloc(database, (*size + 1) * sizeof(Employee*));
    if (updatedDatabase == NULL) {
        printf("Error reallocating memory for the database\n");
        // Note: In a real application, you might want to handle this more gracefully
        return database;
    }

    updatedDatabase[*size] = newEmployee; // Add the new employee to the array
    (*size)++; // Update the size of the database

    return updatedDatabase;
}


int main() 
{
    Employee **database = NULL;
    int databaseSize = 0;

    // Create and add employees to the database
    Employee *emp1 = createEmployee("Alice Smith", 1, 60000.0f);
    database = addEmployee(database, &databaseSize, emp1);

    Employee *emp2 = createEmployee("Bob Johnson", 2, 55000.0f);
    database = addEmployee(database, &databaseSize, emp2);

    // Example of displaying employees
    for (int i = 0; i < databaseSize; i++) {
        Employee *emp = database[i];
        printf("Employee #%d: %s \nID: %d \nSalary: $%.2f\n", i+1, emp->name, emp->id, emp->salary);
    }

    // Free allocated memory
    for (int i = 0; i < databaseSize; i++) {
        free(database[i]->name); // Free the name string
        free(database[i]); // Free the employee struct
    }
    free(database); // Free the database array

    return 0;
}