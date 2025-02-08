#include <stdio.h>

int main() {
    int var = 10;
    int *ptr = &var;

    printf("Memory Address of var: %p\n", ptr);
    printf("Actual Value of var: %d\n", *ptr);

    return 0;
}