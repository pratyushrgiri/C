/*WAP to find the reverse of an input number using **function**.*/
#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reverse of %d is %d\n", num, reverse(num));
    return 0;
}