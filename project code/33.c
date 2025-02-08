
#include <stdio.h>

int main() {
    FILE *file;
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Open the file in append mode
    file = fopen("file.txt", "a");

    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // Write to the file
    fprintf(file, "Name: %s", name);

    // Close the file
    fclose(file);

    printf("Data appended to file successfully.\n");

    return 0;
}
