#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ARR_LEN 3

typedef struct Employee{
  char *name;
  int age;
  struct Employee *boss;
} Employee;

Employee *create_employee() {
  Employee employee = {
    .name = "jose",
    .age = 24
  };

  return &employee;
} 

int main(int argc, char *argv[])
{
  Employee *employess = malloc(MAX_ARR_LEN * sizeof(Employee));
  for (int i = 0; i < MAX_ARR_LEN; i++) {
    Employee boss = {
      .name="jose",
      .age=24,
    };
    Employee *employee_ptr = create_employee();
    employess[i].name = employee_ptr->name;
    employess[i].age = employee_ptr->age;
    employess[i].boss = &boss;
  }

  for (int i = 0; i < MAX_ARR_LEN; i++) {
    if (employess->boss != NULL){
      printf("boss\n");
      printf("%s\n", employess->boss->name);
      if (employess->boss->boss != NULL) {
       printf("boss boss\n");
       printf("%s\n", employess->boss->boss->name);
      } else {
        printf("no boss boss\n");
      }
    }
  };
  return EXIT_SUCCESS;
}
