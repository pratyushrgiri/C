#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    fputs("Hello Kathmandu BernHardt", file);
    fclose(file);
    return 0;
}