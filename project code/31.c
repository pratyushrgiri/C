/*WAP to **write name, address, roll number, and marks of Computer Science subject of 5 students** into the file **“student.txt”**.*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char address[100];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    FILE *fp;
    fp = fopen("student.txt", "w");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%[^\n]", s[i].name);
        printf("Enter address of student %d: ", i + 1);
        scanf(" %[^\n]", s[i].address);
        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &s[i].roll);
        printf("Enter marks of student %d in Computer Science: ", i + 1);
        scanf("%f", &s[i].marks);
        fprintf(fp, "Name: %s\nAddress: %s\nRoll Number: %d\nMarks in Computer Science: %.2f\n\n", s[i].name, s[i].address, s[i].roll, s[i].marks);
        while (getchar() != '\n');
    }
    fclose(fp);
    return 0;
}