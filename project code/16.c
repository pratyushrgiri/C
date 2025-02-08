/* Write a C program to enter **name, grade, age, and address** of **10 students** in a structure and display all the information.*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char grade;
    int age;
    char address[100];
};

int main() {
    struct Student students[10];
    int i;

    // Input student information
    for (i = 0; i < 10; i++) {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Enter grade of student %d: ", i + 1);
        scanf(" %c", &students[i].grade);
        getchar();

        printf("Enter age of student %d: ", i + 1);
        scanf("%d", &students[i].age);
        getchar();

        printf("Enter address of student %d: ", i + 1);
        fgets(students[i].address, sizeof(students[i].address), stdin);
        students[i].address[strcspn(students[i].address, "\n")] = 0;
    }

    // Display student information
    printf("\nStudent Information:\n");
    for (i = 0; i < 10; i++) {
        printf("Name: %s\n", students[i].name);
        printf("Grade: %c\n", students[i].grade);
        printf("Age: %d\n", students[i].age);
        printf("Address: %s\n\n", students[i].address);
    }

    return 0;
}