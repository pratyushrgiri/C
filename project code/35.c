/*WAP to illustrate the **use of fread() and fwrite() functions** used in file handling.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Create a file pointer
    FILE *fp;

    // Create a file and open it in write mode
    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // Data to be written
    char data[] = "Hello, World!";

    // Write data to the file
    fwrite(data, sizeof(char), sizeof(data), fp);

    // Close the file
    fclose(fp);

    // Open the file in read mode
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // Read data from the file
    char buffer[100];
    fread(buffer, sizeof(char), sizeof(data), fp);

    // Print the read data
    printf("Data read from file: %s\n", buffer);

    // Close the file
    fclose(fp);

    return 0;
}
