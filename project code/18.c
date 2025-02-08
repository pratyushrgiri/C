
#include <stdio.h>

struct Staff {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Staff staff[50];
    int i, n;

    printf("Enter the number of staff members: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter staff ID: ");
        scanf("%d", &staff[i].id);
        printf("Enter staff name: ");
        scanf("%s", staff[i].name);
        printf("Enter staff salary: ");
        scanf("%f", &staff[i].salary);
    }

    printf("\nStaff members with salary between 25,000 and 40,000:\n");
    for (i = 0; i < n; i++) {
        if (staff[i].salary >= 25000 && staff[i].salary <= 40000) {
            printf("Staff ID: %d\n", staff[i].id);
            printf("Staff Name: %s\n", staff[i].name);
            printf("Staff Salary: %.2f\n\n", staff[i].salary);
        }
    }

    return 0;
}