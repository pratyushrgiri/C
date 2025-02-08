/*WAP to **read all content from the file “input.txt”** and write it into **“output.txt”**.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *input, *output;
    char ch;

    // Open the input file
    input = fopen("input.txt", "r");
    if (input == NULL) {
        printf("Could not open input file\n");
        exit(1);
    }

    // Open the output file
    output = fopen("output.txt", "w");
    if (output == NULL) {
        printf("Could not open output file\n");
        exit(1);
    }

    // Read from input file and write to output file
    while ((ch = fgetc(input)) != EOF) {
        fputc(ch, output);
    }

    // Close the files
    fclose(input);
    fclose(output);

    return 0;
}