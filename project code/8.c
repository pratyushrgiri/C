/*WAP to read a number and find its **factorial** using **function**.*/
#include <stdio.h>

long factorial(int);

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %ld\n", num, factorial(num));
    return 0;
}

long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return (n * factorial(n-1));
}