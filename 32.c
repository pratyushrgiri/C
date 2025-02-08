#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;
    fp = fopen("student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file");
        return 1;
    }
    printf("Name\tRoll\tMarks\n");
    while (fscanf(fp, "%49s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("%s\t%d\t%.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    return 0;
}