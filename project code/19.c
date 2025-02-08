/*Create a **structure** with members **name, code, and credit hours**. Write a program to read records of **n** courses and display only those records where **credit hours are greater than 3**.*/
#include <stdio.h>
struct Course {
    char name[50];
    char code[10];
    int credit_hours;
};

int main() {
    int n;
    printf("Enter the number of courses: ");
    scanf("%d", &n);

    struct Course courses[n];

    for (int i = 0; i < n; i++) {
        printf("Enter course name: ");
        scanf("%s", courses[i].name);
        printf("Enter course code: ");
        scanf("%s", courses[i].code);
        printf("Enter credit hours: ");
        scanf("%d", &courses[i].credit_hours);
    }

    printf("Courses with credit hours greater than 3:\n");
    for (int i = 0; i < n; i++) {
        if (courses[i].credit_hours > 3) {
            printf("Name: %s\n", courses[i].name);
            printf("Code: %s\n", courses[i].code);
            printf("Credit Hours: %d\n\n", courses[i].credit_hours);
        }
    }

    return 0;
}