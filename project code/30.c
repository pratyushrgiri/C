#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open the file in read mode
    file = fopen("file.txt", "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // Read and display the contents of the file
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    // Close the file
    fclose(file);

    return 0;
}