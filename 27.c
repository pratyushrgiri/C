#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    printf("Enter data to write to file (press Ctrl+Z to stop):\n");
    while ((ch = getchar()) != EOF) {
        fputc(ch, fp);
    }

    fclose(fp);
    return 0;
}