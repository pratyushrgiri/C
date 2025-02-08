/*WAP to **read two integers and find their sum** using **pointer**.*/
#include <stdio.h>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2, *ptr3;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &sum;

    *ptr3 = *ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d\n", num1, num2, *ptr3);

    return 0;
}