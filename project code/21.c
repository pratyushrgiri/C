#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    struct Student students[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter name and age of student %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].age);
        getchar(); // Consume newline left in input buffer
    }

    printf("\nDetails of students whose age is greater than 18:\n");
    for (int i = 0; i < 5; i++) {
        if (students[i].age > 18) {
            printf("Name: %s\nAge: %d\n\n", students[i].name, students[i].age);
        }
    }

    return 0;
}