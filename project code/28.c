/*WAP to **read the values from the file “data.txt”** using **fgetc() function** and display them as output.
*/
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