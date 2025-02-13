#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ARR_LEN 3

typedef struct Employee {
    char *name;
    int age;
    struct Employee *boss;
} Employee;

// Function to create an employee dynamically
Employee *create_employee(const char *name, int age) {
    Employee *employee = malloc(sizeof(Employee));
    if (employee == NULL) {
        perror("Failed to allocate memory for employee");
        exit(EXIT_FAILURE);
    }
    employee->name = strdup(name); // Duplicate the string to avoid dangling pointers
    employee->age = age;
    employee->boss = NULL; // Initialize boss to NULL
    return employee;
}

int main(int argc, char *argv[]) {
    // Allocate memory for an array of employees
    Employee *employees = malloc(MAX_ARR_LEN * sizeof(Employee));
    if (employees == NULL) {
        perror("Failed to allocate memory for employees");
        return EXIT_FAILURE;
    }

    // Create a single boss for all employees
    Employee *boss = create_employee("Jose", 24);

    // Initialize each employee
    for (int i = 0; i < MAX_ARR_LEN; i++) {
        employees[i].name = strdup("EmployeeName"); // Assign a unique name
        employees[i].age = 30 + i;                 // Assign a unique age
        employees[i].boss = boss;                  // Assign the shared boss
    }

    // Print information about each employee and their boss
    for (int i = 0; i < MAX_ARR_LEN; i++) {
        printf("Employee %d:\n", i);
        printf("  Name: %s\n", employees[i].name);
        printf("  Age: %d\n", employees[i].age);

        if (employees[i].boss != NULL) {
            printf("  Boss: %s\n", employees[i].boss->name);

            if (employees[i].boss->boss != NULL) {
                printf("  Boss's Boss: %s\n", employees[i].boss->boss->name);
            } else {
                printf("  No Boss's Boss\n");
            }
        } else {
            printf("  No Boss\n");
        }
    }

    // Free allocated memory
    for (int i = 0; i < MAX_ARR_LEN; i++) {
        free(employees[i].name); // Free the duplicated name
    }
    free(employees); // Free the array of employees
    free(boss->name); // Free the boss's name
    free(boss);       // Free the boss

    return EXIT_SUCCESS;
}
