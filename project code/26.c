/* WAP to **swap the values of two variables** using **Call by Value and Call by Reference***/
#include <stdio.h>

// Function to swap two variables using Call by Value
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value function: a = %d, b = %d\n", a, b);
}

// Function to swap two variables using Call by Reference
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap_by_reference function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a = 10, b = 20;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call by Value
    swap_by_value(a, b);
    printf("After swapping using Call by Value: a = %d, b = %d\n", a, b);

    // Call by Reference
    swap_by_reference(&a, &b);
    printf("After swapping using Call by Reference: a = %d, b = %d\n", a, b);

    return 0;
}