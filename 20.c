
#include <stdio.h>
#include <string.h>

struct Employee {
    char name[50];
    char post[50];
    float salary;
};

int main() {
    struct Employee employees[5];
    int i, j;

    // Read records of 5 employees
    for (i = 0; i < 5; i++) {
        printf("Enter name of employee %d: ", i + 1);
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = 0; // Remove newline character

        printf("Enter post of employee %d: ", i + 1);
        fgets(employees[i].post, sizeof(employees[i].post), stdin);
        employees[i].post[strcspn(employees[i].post, "\n")] = 0; // Remove newline character

        printf("Enter salary of employee %d: ", i + 1);
        scanf("%f", &employees[i].salary);
        getchar(); // Consume newline character
    }

    // Sort employees in alphabetical order of name
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(employees[i].name, employees[j].name) > 0) {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }

    // Display all records
    printf("\nRecords of employees in alphabetical order of name:\n");
    for (i = 0; i < 5; i++) {
        printf("Name: %s\n", employees[i].name);
        printf("Post: %s\n", employees[i].post);
        printf("Salary: %.2f\n\n", employees[i].salary);
    }

    return 0;
}