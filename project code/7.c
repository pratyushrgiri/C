#include <stdio.h>

int check_odd_even(int num) {
    if (num % 2 == 0) {
        return 1; // even
    } else {
        return 0; // odd
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (check_odd_even(num)) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }
    return 0;
}