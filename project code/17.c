
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[100];
    char address[100];
    char post[100];
};

int main() {
    struct Employee employees[20];
    int i, j;

    // Input employee data
    for (i = 0; i < 20; i++) {
        printf("Enter employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter employee name: ");
        scanf("%s", employees[i].name);
        printf("Enter employee address: ");
        scanf("%s", employees[i].address);
        printf("Enter employee post: ");
        scanf("%s", employees[i].post);
    }

    // Display records of employees from Kathmandu
    printf("\nRecords of employees from Kathmandu:\n");
    for (i = 0; i < 20; i++) {
        if (strcmp(employees[i].address, "Kathmandu") == 0) {
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Address: %s\n", employees[i].address);
            printf("Post: %s\n\n", employees[i].post);
        }
    }

    return 0;
}
