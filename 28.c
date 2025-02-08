#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);
    return 0;
}