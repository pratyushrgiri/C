
#include <stdio.h>

int main() {
    int var = 20; /* actual variable declaration */
    int *ptr; /* pointer variable */

    ptr = &var; /* take the address of var */

    printf("Value of var variable: %d\n", var);

    /* print the address stored in pointer variable */
    printf("Address stored in ptr variable: %p\n", ptr);

    /* access the value at the address available in pointer */
    printf("Value of *ptr variable: %d\n", *ptr);

    /* pointer arithmetic */
    ptr++;
    printf("Address after incrementing ptr: %p\n", ptr);
    printf("Value after incrementing ptr: %d\n", *ptr);

    ptr--;
    printf("Address after decrementing ptr: %p\n", ptr);
    printf("Value after decrementing ptr: %d\n", *ptr);

    return 0;
}
